// Function: FUN_016ec420
// Address: 016ec420
// Size: 1358 bytes
// Class: Unknown

void FUN_016ec420(void* param_1,uint64_t param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  void*puVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t lVar6;
  void*puVar7;
  uint64_t extraout_XMM0_Qa;
  int64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  void*local_d0;
  uint8_t local_c8;
  void*local_c0;
  uint32_t local_a8;
  uint32_t uStack_a4;
  char local_a0;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  uint64_t local_40;
  void*local_38;
  
  lVar6 = *arg1;
  if (*(uint64_t *)(lVar6 + 0xc) >> 0x20 == 0) {
LAB_016ec62b:
    if (*(int *)(lVar6 + 0x18) != 0) goto LAB_016ec64c;
LAB_016ec631:
    local_38 = (void*)g_023908c8;
    local_40 = 0;
    puVar7 = (void*)0x0;
  }
  else {
    pVar5 = param_1;
    if (*(int *)(lVar6 + 0x18) != 0) {
      cVar1 = FUN_00e7c000();
      if (cVar1 != '\0') goto LAB_016ec631;
      lVar6 = *arg1;
      if (*(uint64_t *)(lVar6 + 0xc) >> 0x20 == 0) goto LAB_016ec62b;
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0165d690();
      FUN_016da710(extraout_XMM0_Qa,uVar3);
      puVar4 = local_80;
      if ((local_78 == '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      puVar7 = local_80;
      if ((((local_78 == '\0') && (local_80 != (void*)0x0)) &&
          (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_38 = puVar7;
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c0 = local_38;
      FUN_00083ea0(2,&local_c0);
      uVar3 = FUN_016cef10();
      local_88 = 0;
      local_90 = CONCAT44(uStack_a4,local_a8);
      if (local_a0 == '\0') {
        if (local_90 != 0) {
          uVar3 = FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_88 = '\x01';
      uVar3 = FUN_01901690(uVar3,&local_90);
      puVar7 = local_50;
      if (local_50 == (void*)0x0) {
        puVar7 = (void*)0x0;
        local_40 = 0;
      }
      else if (local_48 == '\0') {
        uVar3 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        local_40 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (void*)&g_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_38 = (void*)g_023908c8;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
LAB_016ec64c:
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = lVar6;
      uVar3 = FUN_016d23e0(param_1,&local_f0,param_3,1);
      if (local_80 == (void*)0x0) {
        puVar7 = (void*)0x0;
        local_40 = 0;
      }
      else {
        local_40 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        puVar7 = local_80;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
      }
      local_80 = *(void**)(*arg1 + 0x14);
      if ((uint64_t)local_80 >> 0x20 == 0) {
        local_80 = (void*)FUN_00e7bdb0();
      }
      else {
        local_50 = (void*)CONCAT44(local_50._4_4_,1);
        FUN_00e7c280();
      }
      local_50 = (void*)CONCAT44(local_50._4_4_,1);
      FUN_00e7c260();
      local_38 = (void*)FUN_016c46a0(0,0);
    }
    if (*(int *)((int64_t)puVar7 + 0xc) == 0) goto LAB_016ec82f;
  }
  local_c8 = 0;
  local_d0 = puVar7;
  FUN_016ecb60(0,0,param_3);
  if ((!NAN((double)local_38)) && (param_3 == 1)) {
    lVar6 = *arg1;
    FUN_00e7bcc0();
    FUN_016cb850(local_38,0);
    local_80 = (void*)FUN_00e7cd00();
    FUN_00e7c280();
    puVar4 = local_80;
    local_50 = local_80;
    local_80 = (void*)FUN_00e7bdb0();
    if (((uint64_t)puVar4 >> 0x20 == 0) ||
       (((uint64_t)local_80 >> 0x20 == 0 ||
        (cVar1 = FUN_00e7c000(), puVar4 = local_50, cVar1 == '\0')))) {
      local_80 = puVar4;
      FUN_00e7c260();
      puVar4 = local_80;
    }
    else {
      puVar4 = (void*)FUN_00e7bdb0();
    }
    *(void**)(lVar6 + 0x14) = puVar4;
  }
LAB_016ec82f:
  if (((char)local_40 != '\0') && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

