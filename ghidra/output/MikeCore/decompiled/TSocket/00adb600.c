// Function: FUN_00adb600
// Address: 00adb600
// Size: 615 bytes
// Class: TSocket
// String references:
//   "TSocket::peek() THRIFT_POLL() "
//   "TSocket::peek() recv() "


undefined8 FUN_00adb600(undefined8 param_1,undefined8 param_2,size_t param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_var;
  undefined8 *puVar6;
  ulong uVar7;
  void *pvVar8;
  longlong *unaff_RDI;
  int iVar9;
  undefined4 uVar10;
  void *local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  
  local_30 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar1 = (**(code **)(*unaff_RDI + 0x10))();
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)unaff_RDI[0x10];
    if (puVar4 != (undefined4 *)0x0) {
      iVar9 = 0;
      while( true ) {
        local_48 = (ulonglong)CONCAT24(1,(int)unaff_RDI[8]);
        uStack_40 = (ulonglong)CONCAT24(1,*puVar4);
        iVar2 = _poll((int)unaff_RDI[8],
                      -(uint)(*(uint *)(unaff_RDI + 0x13) == 0) | *(uint *)(unaff_RDI + 0x13));
        piVar5 = ___error();
        if (-1 < iVar2) break;
        iVar2 = *piVar5;
        if ((iVar2 != 4) || ((int)unaff_RDI[0x15] <= iVar9)) {
          FUN_00ad1610();
          ___cxa_allocate_exception();
          local_60 = (void *)0x6e776f6e6b6e550e;
          local_58 = local_58 & 0xffffffffffffff00;
          uVar10 = FUN_00adac50(iVar2,&local_60);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar10,FUN_00953b70);
        }
        iVar9 = iVar9 + 1;
        puVar4 = (undefined4 *)unaff_RDI[0x10];
      }
      if ((iVar2 == 0) || ((uStack_40 & 0x1000000000000) != 0)) goto LAB_00adb70a;
    }
    uVar7 = 2;
    sVar3 = _recv(2,(void *)((longlong)&MACH_HEADER.magic + 1),param_3,param_4);
    if (sVar3 != -1) {
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_30) {
        return CONCAT71((int7)(CONCAT44(extraout_var,sVar3) >> 8),0 < sVar3);
      }
      goto LAB_00adb6f3;
    }
    piVar5 = ___error();
    iVar9 = *piVar5;
    if (iVar9 != 0x36) {
      FUN_00adb250();
      puVar6 = (undefined8 *)std::string::insert(uVar7,"TSocket::peek() recv() ");
      local_50 = puVar6[2];
      pvVar8 = (void *)*puVar6;
      local_58 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      local_60 = pvVar8;
      FUN_00ad1610(pvVar8,iVar9);
      if (((ulonglong)local_60 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_48 & 1) != 0) {
        operator_delete(pvVar8);
      }
      ___cxa_allocate_exception();
      local_60 = (void *)0x2928766365720c;
      uVar10 = FUN_00adac50(iVar9,&local_60);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar10,FUN_00953b70);
    }
  }
LAB_00adb70a:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_30) {
    return 0;
  }
LAB_00adb6f3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


