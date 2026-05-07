// Function: FUN_01948420
// Address: 01948420
// Size: 986 bytes
// Class: QualityScoring


void FUN_01948420(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  int local_48;
  int iStack_44;
  int local_40;
  
  local_50 = *unaff_RSI;
  if (*(int *)(local_50 + 0xc) == *(int *)(unaff_RDI[0xbc] + 0xc)) {
    local_58 = 0;
    local_60 = 0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    bVar6 = true;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar2 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_50 + 0xc) <= local_48) break;
      local_70 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_68 = '\0';
      local_60 = local_70;
      cVar1 = FUN_00d23d70();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        bVar6 = false;
      }
    }
    FUN_00115190();
    if (!bVar6) {
      FUN_00d216c0();
      local_60 = *unaff_RSI;
      local_58 = '\0';
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0xbc] != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        local_50 = unaff_RDI[0xbc];
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar2 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_a0 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          (**(code **)(&UNK_00001698 + *unaff_RDI))(0,&local_a0);
          lVar2 = local_80;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_70 = lVar2;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar2 = local_50;
        FUN_00115190();
        pVar5 = (pthread_key_t)lVar2;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = puVar3;
      FUN_019a4000();
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


