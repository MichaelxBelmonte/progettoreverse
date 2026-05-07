// Function: FUN_0131bcd0
// Address: 0131bcd0
// Size: 1822 bytes
// Class: MULSSGenerator


ulonglong FUN_0131bcd0(pthread_key_t param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  longlong lVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte unaff_SIL;
  longlong *unaff_RDI;
  bool bVar15;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  byte local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  pthread_key_t local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*unaff_RDI != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505930();
    if (local_48 == 0) {
      bVar15 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      bVar15 = *(int *)(local_58 + 0xc) == 1;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar15) {
      lVar13 = *unaff_RDI;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        lVar13 = *unaff_RDI;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      FUN_01505930();
      FUN_00d23310();
      lVar7 = local_48;
      pcVar11 = local_40;
      local_38[0] = local_40[0];
      pcVar8 = pcVar11;
      if (local_40[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)pcVar11;
      if (lVar7 == 0) {
        lVar7 = 0;
        uVar12 = (undefined4)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        uVar12 = 0;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        local_60 = uVar12;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar1 = FUN_01505ea0();
        pVar9 = param_2 & 0xff;
        local_68 = pVar9;
        if ((bVar1 & unaff_SIL) == 1) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01506110();
          bVar1 = 1;
        }
        else {
          bVar1 = bVar1 ^ 1;
        }
        local_5c = CONCAT31(local_5c._1_3_,bVar1);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_98 = 1;
        local_64 = (uint)unaff_SIL;
        local_6c = unaff_SIL;
        cVar2 = FUN_013157a0(local_64,local_a0,1);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        cVar3 = FUN_01316740();
        cVar4 = FUN_013168e0();
        pcVar8 = (char *)0x0;
        pVar9 = 0;
        pcVar11 = (char *)(ulonglong)(byte)local_5c;
        if (cVar2 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar3 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar4 == '\0') {
          pcVar11 = pcVar8;
        }
        pvVar6 = _pthread_getspecific(0);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_48 == 0) {
          bVar15 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb480();
          bVar15 = *(int *)(local_58 + 0xc) != 0;
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar10 = (pthread_key_t)pcVar11;
        pVar9 = 0;
        if (bVar15 == false) {
          pVar9 = pVar10;
        }
        if ((local_6c & bVar15) == 1) {
          while( true ) {
            local_5c = pVar10;
            pvVar6 = _pthread_getspecific((pthread_key_t)pcVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb480();
            FUN_00d23340();
            lVar13 = local_48;
            local_38[0] = local_40[0];
            pcVar11 = local_38;
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = pcVar11;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)pcVar11;
            if (lVar13 == 0) break;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_80 = lVar13;
            local_78 = '\0';
            FUN_012cb5e0();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            pVar10 = local_5c;
          }
          cVar2 = (char)local_5c;
        }
        else {
          cVar2 = (char)pVar9;
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = 1;
        bVar1 = FUN_01319320(local_68,1);
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = FUN_0131a4f0();
        uVar14 = CONCAT71((int7)((ulonglong)lVar13 >> 8),cVar2 != '\0' & bVar5 & bVar1);
        if ((char)local_60 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_0131bf19;
      }
    }
  }
  uVar14 = 0;
LAB_0131bf19:
  return uVar14 & 0xffffffff;
}


