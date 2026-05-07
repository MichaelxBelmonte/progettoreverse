// Function: TSocket_write_partial
// Address: 00ade1d0
// Size: 760 bytes
// Class: TSocket
// String references:
//   "TSocket::write_partial() send() "

ssize_t TSocket_write_partial(ulong param_1,string *param_2,size_t param_3,int param_4)

{
  uint uVar1;
  uint64_t uVar2;
  ssize_t sVar3;
  void*puVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  void *pvVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  byte local_50;
  byte local_38;
  undefined6 uStack_37;
  uint8_t uStack_31;
  uint8_t uStack_30;
  undefined6 uStack_2f;
  uint8_t uStack_29;
  void*local_28;
  
  if (*(int *)(this_ptr + 0x40) == -1) {
    puVar4 = (void*)___cxa_allocate_exception();
    local_28 = operator_new(param_1);
    local_38 = (byte)g_023d4f10;
    uStack_37 = (undefined6)((uint64_t)g_023d4f10 >> 8);
    uStack_31 = (uint8_t)((uint64_t)g_023d4f10 >> 0x38);
    uStack_30 = (uint8_t)_UNK_023d4f18;
    uStack_2f = (undefined6)((uint64_t)_UNK_023d4f18 >> 8);
    uStack_29 = (uint8_t)((uint64_t)_UNK_023d4f18 >> 0x38);
    *(void*)((int64_t)local_28 + 0x17) = 0x74656b636f73206e;
    local_28[2] = 0x6e65706f2d6e6f6e;
    local_28[1] = 0x206e6f2065746972;
    *local_28 = 0x772064656c6c6143;
    *(void*)((int64_t)local_28 + 0x1f) = 0;
    *puVar4 = &g_02517278;
    uVar9 = std::string::string((string *)0x772064656c6c6143,param_2);
    *puVar4 = &g_0252c498;
    *(void*)(puVar4 + 4) = 1;
                        ___cxa_throw(uVar9,FUN_00953b70);
  }
  param_2 = (string *)((uint64_t)param_2 & 0xffffffff);
  uVar7 = 0x80000;
  sVar3 = _send(0x80000,param_2,param_3,param_4);
  if (sVar3 < 0) {
    piVar5 = ___error();
    sVar3 = 0;
    if ((*piVar5 != 0x23) && (piVar5 = ___error(), *piVar5 != 0x23)) {
      puVar6 = (uint *)___error();
      uVar1 = *puVar6;
      FUN_00adb250();
      puVar4 = (void*)std::string::insert(uVar7,"TSocket::write_partial() send() ");
      local_28 = (void*)puVar4[2];
      pvVar8 = (void *)*puVar4;
      uVar2 = puVar4[1];
      uStack_30 = (uint8_t)uVar2;
      uStack_2f = (undefined6)((uint64_t)uVar2 >> 8);
      uStack_29 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      local_38 = (byte)pvVar8;
      uStack_37 = (undefined6)((uint64_t)pvVar8 >> 8);
      uStack_31 = (uint8_t)((uint64_t)pvVar8 >> 0x38);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      FUN_00ad1610(pvVar8,uVar1);
      if ((local_38 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_50 & 1) != 0) {
        operator_delete(pvVar8);
      }
      ___cxa_allocate_exception();
      if ((uVar1 < 0x3a) && ((0x240000100000000U >> ((uint64_t)uVar1 & 0x3f) & 1) != 0)) {
        local_38 = 0x1c;
        uStack_37 = 0x286574697277;
        uStack_31 = 0x29;
        uStack_30 = 0x20;
        uStack_2f = 0x2928646e6573;
        uStack_29 = 0;
        uVar9 = FUN_00adac50(uVar1,&local_38);
                            ___cxa_throw(uVar9,FUN_00953b70);
      }
      local_38 = 0x1c;
      uStack_37 = 0x286574697277;
      uStack_31 = 0x29;
      uStack_30 = 0x20;
      uStack_2f = 0x2928646e6573;
      uStack_29 = 0;
      uVar9 = FUN_00adac50(uVar1,&local_38);
                          ___cxa_throw(uVar9,FUN_00953b70);
    }
  }
  else if (sVar3 == 0) {
    puVar4 = (void*)___cxa_allocate_exception();
    local_28 = operator_new(uVar7);
    local_38 = (byte)g_023d4f20;
    uStack_37 = (undefined6)((uint64_t)g_023d4f20 >> 8);
    uStack_31 = (uint8_t)((uint64_t)g_023d4f20 >> 0x38);
    uStack_30 = (uint8_t)_UNK_023d4f28;
    uStack_2f = (undefined6)((uint64_t)_UNK_023d4f28 >> 8);
    uStack_29 = (uint8_t)((uint64_t)_UNK_023d4f28 >> 0x38);
    *(void*)((int64_t)local_28 + 0xf) = 0x2e302064656e7275;
    local_28[1] = 0x7574657220646e65;
    *local_28 = 0x732074656b636f53;
    *(void*)((int64_t)local_28 + 0x17) = 0;
    *puVar4 = &g_02517278;
    uVar9 = std::string::string((string *)0x732074656b636f53,param_2);
    *puVar4 = &g_0252c498;
    *(void*)(puVar4 + 4) = 1;
                        ___cxa_throw(uVar9,FUN_00953b70);
  }
  return sVar3;
}

