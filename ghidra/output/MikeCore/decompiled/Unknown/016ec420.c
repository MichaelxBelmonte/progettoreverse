// Function: FUN_016ec420
// Address: 016ec420
// Size: 1358 bytes
// Class: Unknown


void FUN_016ec420(pthread_key_t param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 extraout_XMM0_Qa;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  char local_a0;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  lVar6 = *unaff_RSI;
  if (*(ulonglong *)(lVar6 + 0xc) >> 0x20 == 0) {
LAB_016ec62b:
    if (*(int *)(lVar6 + 0x18) != 0) goto LAB_016ec64c;
LAB_016ec631:
    local_38 = (undefined8 *)DAT_023908c8;
    local_40 = 0;
    puVar7 = (undefined8 *)0x0;
  }
  else {
    pVar5 = param_1;
    if (*(int *)(lVar6 + 0x18) != 0) {
      cVar1 = FUN_00e7c000();
      if (cVar1 != '\0') goto LAB_016ec631;
      lVar6 = *unaff_RSI;
      if (*(ulonglong *)(lVar6 + 0xc) >> 0x20 == 0) goto LAB_016ec62b;
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0165d690();
      FUN_016da710(extraout_XMM0_Qa,uVar3);
      puVar4 = local_80;
      if ((local_78 == '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      puVar7 = local_80;
      if ((((local_78 == '\0') && (local_80 != (undefined8 *)0x0)) &&
          (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (undefined8 *)0x0)) {
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
      if (local_50 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
        local_40 = 0;
      }
      else if (local_48 == '\0') {
        uVar3 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        local_40 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (undefined8 *)&DAT_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_38 = (undefined8 *)DAT_023908c8;
      if (puVar4 != (undefined8 *)0x0) {
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
      if (local_80 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
        local_40 = 0;
      }
      else {
        local_40 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        puVar7 = local_80;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
      }
      local_80 = *(undefined8 **)(*unaff_RSI + 0x14);
      if ((ulonglong)local_80 >> 0x20 == 0) {
        local_80 = (undefined8 *)FUN_00e7bdb0();
      }
      else {
        local_50 = (undefined8 *)CONCAT44(local_50._4_4_,1);
        FUN_00e7c280();
      }
      local_50 = (undefined8 *)CONCAT44(local_50._4_4_,1);
      FUN_00e7c260();
      local_38 = (undefined8 *)FUN_016c46a0(0,0);
    }
    if (*(int *)((longlong)puVar7 + 0xc) == 0) goto LAB_016ec82f;
  }
  local_c8 = 0;
  local_d0 = puVar7;
  FUN_016ecb60(0,0,param_3);
  if ((!NAN((double)local_38)) && (param_3 == 1)) {
    lVar6 = *unaff_RSI;
    FUN_00e7bcc0();
    FUN_016cb850(local_38,0);
    local_80 = (undefined8 *)FUN_00e7cd00();
    FUN_00e7c280();
    puVar4 = local_80;
    local_50 = local_80;
    local_80 = (undefined8 *)FUN_00e7bdb0();
    if (((ulonglong)puVar4 >> 0x20 == 0) ||
       (((ulonglong)local_80 >> 0x20 == 0 ||
        (cVar1 = FUN_00e7c000(), puVar4 = local_50, cVar1 == '\0')))) {
      local_80 = puVar4;
      FUN_00e7c260();
      puVar4 = local_80;
    }
    else {
      puVar4 = (undefined8 *)FUN_00e7bdb0();
    }
    *(undefined8 **)(lVar6 + 0x14) = puVar4;
  }
LAB_016ec82f:
  if (((char)local_40 != '\0') && (puVar7 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


