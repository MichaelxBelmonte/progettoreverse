// Function: FUN_0134fa60
// Address: 0134fa60
// Size: 1546 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0134ffeb) */
/* WARNING: Removing unreachable block (ram,0x0134fff7) */
/* WARNING: Removing unreachable block (ram,0x01350090) */
/* WARNING: Removing unreachable block (ram,0x013500a0) */

void FUN_0134fa60(void)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40 [8];
  longlong local_38;
  
  if (0 < *(int *)(*unaff_RSI + 0xc)) {
    lVar10 = 0;
    local_50 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      uVar3 = local_50;
      cVar1 = (char)local_50;
      FUN_00d23310();
      lVar9 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar9 != 0)) {
        pcVar4 = (char *)FUN_00d50b20();
      }
      if (lVar9 == lVar6) {
        if ((cVar1 == '\0') && (lVar9 != 0)) {
          local_50 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          lVar9 = lVar6;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_60 == '\0') || (lVar9 == 0)) {
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
      }
      else if (local_60 == '\0') {
        if (lVar9 != 0) {
          pcVar4 = (char *)FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      lVar6 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)pcVar8;
      if (lVar6 == local_38) {
        if ((bVar2) || (lVar6 == 0)) {
          if ((local_60 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_60 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar2) || (local_38 == 0)) goto LAB_0134fc90;
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else {
LAB_0134fc90:
        local_38 = lVar6;
        bVar2 = true;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_48 == 0) {
        bVar11 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_0125e7c0();
        if (CONCAT71(uStack_5f,local_60) == 0) {
          bVar11 = false;
          lVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          bVar11 = local_c8 == local_108;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = CONCAT71(uStack_5f,local_60);
        }
        if ((local_58 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        local_e0 = 0;
        local_d8 = local_38;
        local_d0 = 0;
        local_e8 = lVar9;
        FUN_01329cf0(&local_d8,&local_e8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00e7bdb0();
      FUN_01287c80();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_012879b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar9;
    } while (lVar10 < *(int *)(*unaff_RSI + 0xc));
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


