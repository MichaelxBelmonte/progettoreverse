// Function: FUN_00d25fa0
// Address: 00d25fa0
// Size: 1624 bytes
// Class: GNSerialNumber
// String references:
//   "serial number format mistmatch"

void*
FUN_00d25fa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint8_t uVar7;
  uint64_t local_e0;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint8_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  cVar4 = FUN_00d268e0();
  if (cVar4 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_00d26d10();
  plVar3 = local_40;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d260af;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d260af:
    *(void*)(arg1 + 1) = 1;
  }
  FUN_00d276b0();
  plVar3 = local_40;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d2616b;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d2616b:
    *(void*)(arg1 + 1) = 1;
  }
  uVar7 = 0;
  uVar6 = FUN_00d27c30();
  plVar3 = local_40;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 == '\0') {
        uVar6 = FUN_00d50b00();
      }
      goto LAB_00d2620d;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
LAB_00d2620d:
    *(void*)(arg1 + 1) = 1;
  }
  lVar2 = g_026fce10;
  if (g_026fce10 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  FUN_00d97fb0(uVar6,&local_b0,param_3,param_4,uVar7);
  plVar3 = local_40;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_00d26336;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d26331;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00d26331:
      *(void*)(arg1 + 1) = 1;
LAB_00d26336:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2634a;
    }
    *arg1 = (int64_t)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
  local_38 = '\0';
LAB_00d2634a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *arg1;
  local_98 = '\0';
  uVar6 = FUN_00ddb860();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar1 + 0x430))(uVar6,1);
  lVar2 = g_0277d248;
  uVar6 = extraout_XMM0_Da;
  if (cVar4 == '\0') {
    if (g_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,g_025908a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,6);
  lVar2 = g_0277d248;
  uVar6 = extraout_XMM0_Da_00;
  if (cVar4 == '\0') {
    if (g_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,g_025908a0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,3);
  lVar2 = g_0277d248;
  uVar6 = extraout_XMM0_Da_01;
  if (cVar4 == '\0') {
    if (g_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,g_025908a0);
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x418))(uVar6,9);
  lVar2 = g_0277d248;
  if (cVar4 == '\0') {
    uVar6 = extraout_XMM0_Da_02;
    if (g_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7b40(uVar6,g_025908a0);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025726d0;
  *(void*)((int64_t)puVar5 + 0xc) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  FUN_00d500e0();
  *(void*)((int64_t)puVar5 + 0xc) = local_4c;
  *(void*)(puVar5 + 2) = local_48;
  *(void*)((int64_t)puVar5 + 0x14) = local_44;
  puVar5[3] = local_e0;
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

