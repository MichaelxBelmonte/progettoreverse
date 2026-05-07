// Function: FUN_0070e870
// Address: 0070e870
// Size: 1599 bytes
// Class: MDAudioTrackHeaderViewController


/* WARNING: Removing unreachable block (ram,0x0070ecdc) */
/* WARNING: Removing unreachable block (ram,0x0070ece8) */
/* WARNING: Removing unreachable block (ram,0x0070ed84) */
/* WARNING: Removing unreachable block (ram,0x0070ed90) */
/* WARNING: Removing unreachable block (ram,0x0070ee7e) */
/* WARNING: Removing unreachable block (ram,0x0070ee8a) */

undefined4 FUN_0070e870(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong lVar7;
  bool bVar8;
  longlong *local_118;
  char local_110;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  FUN_006fc300();
  lVar7 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((*(int *)(*unaff_RSI + 0xc) == 1) && (*(int *)(lVar7 + 0xc) == 1)) {
    local_40 = lVar7;
    FUN_00d23310();
    lVar7 = local_50;
    local_60 = local_48[0];
    pcVar6 = &local_60;
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = pcVar6;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    iVar1 = *(int *)(local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = local_40;
    if (iVar1 == 0) {
      FUN_006f3f00();
      FUN_00d23310();
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = &local_60;
      }
      local_60 = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      if ((local_60 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      local_90 = local_50;
      local_88 = '\x01';
      uVar2 = FUN_0075edc0(0,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0070eda8;
    }
  }
  if (*(int *)(lVar7 + 0xc) == 1) {
    FUN_00d23310();
    lVar7 = local_50;
    pcVar6 = local_48;
    local_38[0] = local_48[0];
    pcVar4 = local_38;
    if (local_48[0] != '\0') {
      pcVar4 = pcVar6;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar5 = (pthread_key_t)pcVar6;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (*(int *)(local_70 + 0xc) == 0) {
      FUN_006f3f00();
      (**(code **)(*local_118 + 0x628))();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      bVar8 = *(int *)(local_50 + 0xc) == 1;
      if (local_48[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (local_110 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = false;
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (bVar8) {
      FUN_006f3f00();
      FUN_00d23310();
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = &local_60;
      }
      local_60 = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      if ((local_60 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      local_80 = local_50;
      local_78 = '\x01';
      uVar2 = FUN_0075edc0(0,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0070eda8;
    }
  }
  FUN_006f3f00();
  local_a0 = 0;
  local_98 = '\0';
  uVar2 = FUN_0075edc0(0,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_0070eda8:
  FUN_00d50b20();
  return uVar2;
}


