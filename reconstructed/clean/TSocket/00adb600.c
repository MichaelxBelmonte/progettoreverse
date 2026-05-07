// Function: TSocket_peek
// Address: 00adb600
// Size: 615 bytes
// Class: TSocket
// String references:
//   "TSocket::peek() THRIFT_POLL() "
//   "TSocket::peek() recv() "

uint64_t TSocket_peek(uint64_t param_1,uint64_t param_2,size_t param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  void*puVar4;
  int *piVar5;
  uint32_t extraout_var;
  void*puVar6;
  ulong uVar7;
  void *pvVar8;
  int64_t *this_ptr;
  int iVar9;
  uint32_t uVar10;
  void *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_30;
  
  local_30 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  cVar1 = (**(code **)(*this_ptr + 0x10))();
  if (cVar1 != '\0') {
    puVar4 = (void*)this_ptr[0x10];
    if (puVar4 != (void*)0x0) {
      iVar9 = 0;
      while( true ) {
        local_48 = (uint64_t)CONCAT24(1,(int)this_ptr[8]);
        uStack_40 = (uint64_t)CONCAT24(1,*puVar4);
        iVar2 = _poll((int)this_ptr[8],
                      -(uint)(*(uint *)(this_ptr + 0x13) == 0) | *(uint *)(this_ptr + 0x13));
        piVar5 = ___error();
        if (-1 < iVar2) break;
        iVar2 = *piVar5;
        if ((iVar2 != 4) || ((int)this_ptr[0x15] <= iVar9)) {
          FUN_00ad1610();
          ___cxa_allocate_exception();
          local_60 = (void *)0x6e776f6e6b6e550e;
          local_58 = local_58 & 0xffffffffffffff00;
          uVar10 = FUN_00adac50(iVar2,&local_60);
                              ___cxa_throw(uVar10,FUN_00953b70);
        }
        iVar9 = iVar9 + 1;
        puVar4 = (void*)this_ptr[0x10];
      }
      if ((iVar2 == 0) || ((uStack_40 & 0x1000000000000) != 0)) goto LAB_00adb70a;
    }
    uVar7 = 2;
    sVar3 = _recv(2,(void *)((int64_t)&MACH_HEADER.magic + 1),param_3,param_4);
    if (sVar3 != -1) {
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_30) {
        return CONCAT71((int7)(CONCAT44(extraout_var,sVar3) >> 8),0 < sVar3);
      }
      goto LAB_00adb6f3;
    }
    piVar5 = ___error();
    iVar9 = *piVar5;
    if (iVar9 != 0x36) {
      FUN_00adb250();
      puVar6 = (void*)std::string::insert(uVar7,"TSocket::peek() recv() ");
      local_50 = puVar6[2];
      pvVar8 = (void *)*puVar6;
      local_58 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      local_60 = pvVar8;
      FUN_00ad1610(pvVar8,iVar9);
      if (((uint64_t)local_60 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_48 & 1) != 0) {
        operator_delete(pvVar8);
      }
      ___cxa_allocate_exception();
      local_60 = (void *)0x2928766365720c;
      uVar10 = FUN_00adac50(iVar9,&local_60);
                          ___cxa_throw(uVar10,FUN_00953b70);
    }
  }
LAB_00adb70a:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_30) {
    return 0;
  }
LAB_00adb6f3:
                      ___stack_chk_fail();
}

