// Function: FUN_0153e0c0
// Address: 0153e0c0
// Size: 16414 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x015411ba) */
/* WARNING: Removing unreachable block (ram,0x01542107) */
/* WARNING: Removing unreachable block (ram,0x0153f481) */
/* WARNING: Removing unreachable block (ram,0x0153f48d) */
/* WARNING: Removing unreachable block (ram,0x0153e4cc) */
/* WARNING: Removing unreachable block (ram,0x0153e4d8) */
/* WARNING: Removing unreachable block (ram,0x0153eaaa) */
/* WARNING: Removing unreachable block (ram,0x0153eab6) */
/* WARNING: Removing unreachable block (ram,0x0153f65e) */
/* WARNING: Removing unreachable block (ram,0x0153f66a) */
/* WARNING: Removing unreachable block (ram,0x01541e27) */
/* WARNING: Removing unreachable block (ram,0x01541e50) */
/* WARNING: Removing unreachable block (ram,0x0153e55b) */
/* WARNING: Removing unreachable block (ram,0x0153e567) */
/* WARNING: Removing unreachable block (ram,0x0153f6d3) */
/* WARNING: Removing unreachable block (ram,0x0153f6df) */
/* WARNING: Removing unreachable block (ram,0x01541e29) */
/* WARNING: Removing unreachable block (ram,0x01541e52) */
/* WARNING: Removing unreachable block (ram,0x0153e575) */
/* WARNING: Removing unreachable block (ram,0x0153e584) */
/* WARNING: Removing unreachable block (ram,0x0153e8d4) */
/* WARNING: Removing unreachable block (ram,0x0153e8e0) */
/* WARNING: Removing unreachable block (ram,0x0153e953) */
/* WARNING: Removing unreachable block (ram,0x0153e95f) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0153e0c0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  pthread_key_t pVar5;
  int iVar6;
  code **ppcVar7;
  longlong *plVar8;
  longlong lVar9;
  void *pvVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  code *pcVar17;
  code **ppcVar18;
  pthread_key_t pVar19;
  uint uVar20;
  longlong lVar21;
  code *pcVar22;
  int iVar23;
  code *unaff_RDI;
  bool bVar24;
  code *unaff_R14;
  undefined7 uVar25;
  code *local_1f8;
  char local_1f0;
  code *local_1e8;
  char local_1e0;
  code *local_1d8;
  char local_1d0;
  code *local_1c8;
  char local_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  char local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  char local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  longlong *local_168;
  code *local_160;
  pthread_key_t local_158;
  pthread_key_t local_154;
  undefined8 local_150;
  code *local_148;
  pthread_key_t local_13c;
  code *local_138;
  code *local_130;
  code *local_128;
  undefined *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  code *local_100;
  code *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  code *local_e0;
  ulonglong local_d8;
  char local_d0;
  code *local_c8;
  code *local_c0;
  char local_b8 [8];
  code *local_b0;
  undefined8 local_a8;
  int local_a0;
  uint local_94;
  code *local_90;
  code *local_88;
  char local_80 [8];
  code *local_78;
  undefined8 local_70;
  int local_68;
  code *local_60;
  code *local_58;
  char local_50 [8];
  code *local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) == 0) {
    return;
  }
  FUN_00d23310();
  pcVar11 = local_58;
  ppcVar18 = (code **)local_50;
  local_88 = (code *)CONCAT71(local_88._1_7_,local_50[0]);
  ppcVar7 = ppcVar18;
  if (local_50[0] == '\0') {
    ppcVar7 = &local_88;
  }
  *(char *)ppcVar7 = '\0';
  if ((local_50[0] != '\0') && (pcVar11 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pVar19 = (pthread_key_t)ppcVar18;
  local_e8 = pcVar11;
  if (((char)local_88 == '\0') && (pcVar11 != (code *)0x0)) {
    FUN_00d50b00();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  local_168 = plVar8;
  if (*(code **)(unaff_RDI + 0x60) != (code *)0x0) {
    local_50[0] = '\0';
    local_58 = (code *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_110 = DAT_02572370;
    local_40._4_4_ = 0;
    unaff_R14 = (code *)&DAT_02802558;
    local_48 = *(code **)(unaff_RDI + 0x60);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar23 = -local_40._4_4_;
        }
        else {
          iVar23 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar23);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar23 = 0;
        }
        local_40 = CONCAT44(iVar23,(int)local_40);
      }
      lVar9 = (longlong)(int)local_40;
      iVar23 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar23);
      if (*(int *)(local_48 + 0xc) <= iVar23) break;
      lVar21 = *(longlong *)(local_48 + 0x10);
      local_58 = *(code **)(lVar21 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
      pVar19 = (pthread_key_t)lVar21;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar23 = FUN_017dca70();
      pvVar10 = _pthread_getspecific(pVar19);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar19 = (pthread_key_t)local_e8;
      }
      iVar4 = FUN_017dca70();
      pcVar11 = local_58;
      if ((iVar4 < iVar23) && (local_58 != local_e8)) {
        if (local_50[0] == '\0') {
          if (local_58 != (code *)0x0) {
            FUN_00d50b00();
          }
          if (local_e8 != (code *)0x0) {
            FUN_00d50b20();
            local_e8 = pcVar11;
            goto LAB_0153e310;
          }
        }
        else {
          if (local_e8 != (code *)0x0) {
            FUN_00d50b20();
          }
          local_50[0] = '\0';
        }
        local_e8 = pcVar11;
      }
LAB_0153e310:
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017db880();
      local_60 = local_88;
      if ((((local_80[0] == '\0') && (local_88 != (code *)0x0)) &&
          (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar19);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar19 = (pthread_key_t)local_60;
      }
      FUN_012972e0();
      pcVar11 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 == (code *)0x0) goto LAB_0153e410;
        FUN_00d50b00();
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_88 == (code *)0x0) {
LAB_0153e410:
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if ((((local_88 != (code *)0x0) && (pcVar11 = local_88, local_80[0] == '\0')) &&
            (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_90 = pcVar11;
      FUN_01543840();
      pcVar11 = local_88;
      if (local_80[0] == '\0') {
        if (((local_88 != (code *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
           (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80[0] = '\0';
      }
      if (pcVar11 == (code *)0x0) {
        pcVar11 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(undefined **)pcVar11 = &DAT_02572358;
        (*local_110)();
        FUN_015438f0();
      }
      local_88 = local_58;
      local_80[0] = '\0';
      puVar15 = (ulonglong *)0x0;
      local_e0 = pcVar11;
      FUN_00d24b60(0,FUN_017db4e0);
      if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
      while( true ) {
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017ddb20();
        iVar23 = *(int *)(local_88 + 0xc);
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar23 == 0) break;
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017ddb20();
        FUN_00d23340();
        pcVar11 = local_88;
        local_d8 = CONCAT71(local_d8._1_7_,local_80[0]);
        puVar15 = &local_d8;
        puVar16 = (ulonglong *)local_80;
        if (local_80[0] == '\0') {
          puVar16 = puVar15;
        }
        *(char *)puVar16 = '\0';
        if ((local_80[0] != '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e15e0();
        if (((char)local_d8 != '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017dde20();
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017dddc0();
      pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017de950();
      pcVar11 = local_88;
      if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (pcVar11 != (code *)0x0) {
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de950();
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017deb20();
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar15);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de970();
      }
      while( true ) {
        pVar19 = (pthread_key_t)puVar15;
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de9c0();
        iVar23 = *(int *)(local_88 + 0xc);
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar23 == 0) break;
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de9c0();
        FUN_00d23340();
        pcVar11 = local_88;
        local_d8 = CONCAT71(local_d8._1_7_,local_80[0]);
        puVar15 = &local_d8;
        puVar16 = (ulonglong *)local_80;
        if (local_80[0] == '\0') {
          puVar16 = puVar15;
        }
        *(char *)puVar16 = '\0';
        if ((local_80[0] != '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pVar19 = (pthread_key_t)puVar15;
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de970();
        if (((char)local_d8 != '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de9c0();
        FUN_00d23340();
        pcVar11 = local_88;
        local_d8 = CONCAT71(local_d8._1_7_,local_80[0]);
        puVar15 = &local_d8;
        puVar16 = (ulonglong *)local_80;
        if (local_80[0] == '\0') {
          puVar16 = puVar15;
        }
        *(char *)puVar16 = '\0';
        if ((local_80[0] != '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_1a8 = 0;
        if (((char)local_d8 == '\0') && (pcVar11 != (code *)0x0)) {
          FUN_00d50b00();
        }
        local_1b0 = pcVar11;
        local_1a8 = '\x01';
        FUN_017deb20();
        if ((local_1a8 != '\0') && (local_1b0 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017dddc0();
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017dde20();
      if (local_e0 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_90 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_60 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
    pcVar11 = local_48;
    FUN_01916320();
    pVar19 = (pthread_key_t)pcVar11;
  }
  if (unaff_RDI[0x70] != (code)0x0) goto LAB_01541af4;
  pvVar10 = _pthread_getspecific(pVar19);
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar19 = (pthread_key_t)local_e8;
  }
  FUN_017dc5f0();
  local_128 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50[0] != '\0')
      ) && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar19);
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar19 = (pthread_key_t)local_128;
  }
  FUN_017e4950();
  local_138 = local_58;
  if (((local_50[0] == '\0') && (local_58 != (code *)0x0)) &&
     ((FUN_00d50b00(), local_50[0] != '\0' && (local_58 != (code *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_108 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (code *)0x0)) && (FUN_00d50b00(), local_50[0] != '\0')
      ) && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pcVar11 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar19 = 0x2572358;
  local_120 = &DAT_02572358;
  *(undefined **)pcVar11 = &DAT_02572358;
  local_118 = DAT_02572370;
  (*DAT_02572370)();
  local_130 = pcVar11;
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_f0 = puVar12;
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = (code *)puVar12;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  pcVar11 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined **)pcVar11 = local_120;
  (*local_118)();
  local_50[0] = '\0';
  local_58 = pcVar11;
  FUN_00d21140();
  if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_168 != (longlong *)0x0) {
    local_80[0] = '\0';
    local_88 = (code *)0x0;
    local_78 = (code *)local_168[2];
    local_70 = local_70 & 0xffffffff00000000;
    if (0 < *(int *)(local_78 + 0xc)) {
      pVar19 = 0;
      do {
        lVar9 = (longlong)(int)pVar19;
        local_88 = *(code **)(*(longlong *)(local_78 + 0x10) + lVar9 * 8);
        FUN_015439a0();
        pVar19 = (pthread_key_t)lVar9;
        local_178 = local_58;
        if ((((local_50[0] == '\0') && (local_58 != (code *)0x0)) &&
            (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pcVar11 = (code *)FUN_0117cc70();
        (**(code **)(*(longlong *)pcVar11 + 0x18))();
        pvVar10 = _pthread_getspecific(pVar19);
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar19 = (pthread_key_t)local_128;
        }
        local_e0 = pcVar11;
        FUN_017e5b60();
        local_50[0] = '\0';
        local_58 = pcVar11;
        FUN_00d21140();
        if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_150 = CONCAT44(local_150._4_4_,0xffffffff);
        if (local_178 == (code *)0x0) {
          local_158 = 0x7fffffff;
          local_154 = 0x80000000;
          local_148 = (code *)0x0;
          local_f8 = (code *)0x0;
          local_180 = 0;
          local_90 = (code *)0x0;
          local_c8 = (code *)0x0;
          local_100 = (code *)0x0;
          local_110 = (code *)0x0;
          local_60 = (code *)0x0;
          local_160 = (code *)CONCAT44(local_160._4_4_,0x80000000);
          local_13c = 0x7fffffff;
        }
        else {
          local_50[0] = '\0';
          local_58 = (code *)0x0;
          local_48 = local_178;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_158 = 0x7fffffff;
          local_154 = 0x80000000;
          local_148 = (code *)0x0;
          local_f8 = (code *)0x0;
          local_180 = 0;
          local_90 = (code *)0x0;
          local_c8 = (code *)0x0;
          local_100 = (code *)0x0;
          local_110 = (code *)0x0;
          local_60 = (code *)0x0;
          local_160 = (code *)CONCAT44(local_160._4_4_,0x80000000);
          local_13c = 0x7fffffff;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar23 = -local_40._4_4_;
              }
              else {
                iVar23 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar23);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar23 = 0;
              }
              local_40 = CONCAT44(iVar23,(int)local_40);
            }
            lVar9 = (longlong)(int)local_40;
            iVar23 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar23);
            if (*(int *)(local_48 + 0xc) <= iVar23) break;
            lVar21 = *(longlong *)(local_48 + 0x10);
            local_58 = *(code **)(lVar21 + 8 + lVar9 * 8);
            pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
            pVar19 = (pthread_key_t)lVar21;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pVar19 = (pthread_key_t)local_e0;
            }
            FUN_017e1220();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017ddb50();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar5 = FUN_017dca70();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017db850();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_01508bf0();
            if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012521f0(uVar13,1,0,0);
            pcVar11 = local_c0;
            local_d8 = CONCAT71(local_d8._1_7_,local_b8[0]);
            puVar15 = &local_d8;
            puVar16 = (ulonglong *)local_b8;
            if (local_b8[0] == '\0') {
              puVar16 = puVar15;
            }
            *(undefined1 *)puVar16 = 0;
            if ((local_b8[0] != '\0') && (pcVar11 != (code *)0x0)) {
              FUN_00d50b20();
            }
            pVar19 = (pthread_key_t)puVar15;
            if (((char)local_d8 == '\0') && (pcVar11 != (code *)0x0)) {
              FUN_00d50b00();
            }
            if (pcVar11 == local_90) {
              local_94 = (uint)local_148;
              pcVar17 = unaff_RDI;
            }
            else {
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01510360(0,0,0);
              uVar14 = local_d8;
              local_188 = 0;
              if (local_d0 == '\0') {
                if (local_d8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d0 = '\0';
              }
              local_188 = '\x01';
              local_190 = uVar14;
              FUN_017178d0();
              unaff_R14 = local_c0;
              if (local_b8[0] == '\0') {
                if (((local_c0 != (code *)0x0) && (FUN_00d50b00(), local_b8[0] != '\0')) &&
                   (local_c0 != (code *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_b8[0] = '\0';
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_1f8 = pcVar11;
              local_1f0 = '\0';
              local_1e8 = unaff_R14;
              local_1e0 = '\0';
              ppcVar18 = &local_1e8;
              uVar13 = FUN_017e22f0(ppcVar18,&local_1f8);
              pcVar22 = local_c0;
              pcVar17 = local_148;
              pVar19 = (pthread_key_t)ppcVar18;
              cVar3 = (char)local_148;
              if (local_c0 == local_f8) {
                pcVar22 = local_f8;
                if ((cVar3 == '\0') && (local_c0 != (code *)0x0)) {
                  if (local_b8[0] != '\0') goto LAB_0153faaa;
                  local_94 = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  uVar14 = FUN_00d50b00();
                  pcVar22 = local_f8;
                }
                else {
                  local_94 = (uint)local_148;
                  uVar14 = (ulonglong)local_148 & 0xffffffff;
                }
joined_r0x0153fb11:
                local_f8 = pcVar22;
                if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
              }
              else {
                if (local_b8[0] == '\0') {
                  if (local_c0 != (code *)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                  uVar14 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                  local_94 = (uint)uVar14;
                  if ((cVar3 != '\0') && (local_f8 != (code *)0x0)) {
                    uVar14 = FUN_00d50b20();
                  }
                  goto joined_r0x0153fb11;
                }
                if ((cVar3 != '\0') && (local_f8 != (code *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
LAB_0153faaa:
                local_b8[0] = '\0';
                uVar14 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                local_94 = (uint)uVar14;
                local_f8 = pcVar22;
              }
              if ((local_1e0 != '\0') && (local_1e8 != (code *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_1f0 != '\0') && (local_1f8 != (code *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              if (pcVar11 != (code *)0x0) {
                uVar14 = FUN_00d50b00();
              }
              if (((char)local_180 != '\0') && (local_90 != (code *)0x0)) {
                local_90 = pcVar11;
                uVar14 = FUN_00d50b20();
              }
              local_180 = CONCAT71((int7)(uVar14 >> 8),1);
              if (unaff_R14 == (code *)0x0) {
                local_90 = pcVar11;
              }
              else {
                FUN_00d50b20();
                local_90 = pcVar11;
              }
            }
            cVar3 = FUN_01716980();
            if (cVar3 == '\0') {
              cVar3 = FUN_01716980();
              pVar19 = 0x2802558;
              if (cVar3 == '\0') {
                pvVar10 = _pthread_getspecific(0x2802558);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017dddc0();
              }
              else {
                pvVar10 = _pthread_getspecific(0x2802558);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017dddc0();
              }
            }
            else {
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017dddc0();
              FUN_0171a210();
              pVar19 = (pthread_key_t)local_f0[2];
              local_c0 = local_58;
              local_b8[0] = '\0';
              FUN_00d21140();
              if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
                FUN_00d50b20();
              }
              if ((int)pVar5 < (int)local_158) {
                local_158 = pVar5;
              }
              if ((int)local_154 < (int)pVar5) {
                local_154 = pVar5;
              }
            }
            if (local_60 != (code *)0x0) {
              FUN_0153de70();
            }
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar23 = FUN_017dddb0();
            pcVar22 = local_100;
            if (iVar23 == 3) {
LAB_0153fdc6:
              unaff_R14 = (code *)((ulonglong)local_c8 & 0xffffffff);
            }
            else {
              if (local_100 != (code *)0x0) {
                FUN_0153de70();
              }
              pcVar17 = local_58;
              uVar25 = (undefined7)((ulonglong)unaff_R14 >> 8);
              if (local_58 == pcVar22) {
                if (((char)local_c8 == '\0') && (local_58 != (code *)0x0)) {
                  pcVar22 = local_100;
                  if (local_50[0] == '\0') {
                    unaff_R14 = (code *)CONCAT71(uVar25,1);
                    FUN_00d50b00();
                    goto LAB_0153fe83;
                  }
                  goto LAB_0153fe75;
                }
                goto LAB_0153fdc6;
              }
              if (local_50[0] == '\0') {
                if (local_58 != (code *)0x0) {
                  FUN_00d50b00();
                }
                unaff_R14 = (code *)CONCAT71(uVar25,1);
                if (((char)local_c8 == '\0') || (local_100 == (code *)0x0)) goto LAB_0153fe7c;
                FUN_00d50b20();
                local_100 = pcVar17;
              }
              else {
                pcVar22 = pcVar17;
                if (((char)local_c8 != '\0') && (local_100 != (code *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0153fe75:
                local_50[0] = '\0';
                pcVar17 = pcVar22;
LAB_0153fe7c:
                unaff_R14 = (code *)CONCAT71(uVar25,1);
                local_100 = pcVar17;
              }
            }
LAB_0153fe83:
            pcVar22 = local_58;
            uVar25 = (undefined7)((ulonglong)pcVar17 >> 8);
            if (local_58 == local_60) {
              if (((char)local_110 == '\0') && (local_58 != (code *)0x0)) {
                pcVar22 = local_60;
                if (local_50[0] != '\0') goto LAB_0153fecc;
                uVar14 = CONCAT71(uVar25,1);
                FUN_00d50b00();
              }
              else {
                uVar14 = (ulonglong)local_110 & 0xffffffff;
              }
            }
            else {
              if (local_50[0] == '\0') {
                if (local_58 != (code *)0x0) {
                  FUN_00d50b00();
                }
                uVar14 = CONCAT71(uVar25,1);
                if (((char)local_110 != '\0') && (local_60 != (code *)0x0)) {
                  FUN_00d50b20();
                  local_60 = pcVar22;
                  goto LAB_0153ff70;
                }
              }
              else {
                if (((char)local_110 != '\0') && (local_60 != (code *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0153fecc:
                local_50[0] = '\0';
              }
              uVar14 = CONCAT71(uVar25,1);
              local_60 = pcVar22;
            }
LAB_0153ff70:
            if ((int)pVar5 < (int)local_13c) {
              local_13c = pVar5;
            }
            pVar19 = (pthread_key_t)local_160;
            if ((int)(pthread_key_t)local_160 < (int)pVar5) {
              pVar19 = pVar5;
            }
            local_160 = (code *)CONCAT44(local_160._4_4_,pVar19);
            if (pcVar11 != (code *)0x0) {
              FUN_00d50b20();
            }
            local_148 = (code *)(ulonglong)local_94;
            local_c8 = (code *)((ulonglong)unaff_R14 & 0xffffffff);
            local_110 = (code *)(uVar14 & 0xffffffff);
          }
          pcVar11 = local_48;
          FUN_01916320();
          pVar19 = (pthread_key_t)pcVar11;
          pcVar11 = local_e0;
        }
        pvVar10 = _pthread_getspecific(pVar19);
        pcVar17 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar17 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(pthread_key_t *)(pcVar17 + 0x54) = local_158;
        pvVar10 = _pthread_getspecific(local_158);
        pcVar17 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar17 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(pthread_key_t *)(pcVar17 + 0x58) = local_154;
        if (((pthread_key_t)local_160 == -0x80000000) || (local_13c == 0x7fffffff)) {
          pvVar10 = _pthread_getspecific(local_154);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017e14d0();
        }
        else {
          pvVar10 = _pthread_getspecific(local_154);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017e14d0();
        }
        if (((char)local_148 != '\0') && (local_f8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_180 != '\0') && (local_90 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_c8 != '\0') && (local_100 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_110 != '\0') && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (pcVar11 != (code *)0x0) {
          FUN_00d50b20();
        }
        if (local_178 != (code *)0x0) {
          FUN_00d50b20();
        }
        pVar19 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,pVar19);
      } while ((int)pVar19 < *(int *)(local_78 + 0xc));
      if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pcVar11 = local_130;
  FUN_00d242c0();
  if (pcVar11 != (code *)0x0) {
    local_50[0] = '\0';
    local_58 = (code *)0x0;
    local_48 = pcVar11;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar23 = -local_40._4_4_;
        }
        else {
          iVar23 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar23);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar23 = 0;
        }
        local_40 = CONCAT44(iVar23,(int)local_40);
      }
      lVar9 = (longlong)(int)local_40;
      iVar23 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar23);
      if (*(int *)(local_48 + 0xc) <= iVar23) break;
      lVar21 = *(longlong *)(local_48 + 0x10);
      local_58 = *(code **)(lVar21 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
      pVar19 = (pthread_key_t)lVar21;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e14d0();
      if ((int)local_40 != 0 || local_38 != 0) {
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e11f0();
        pVar19 = 0;
        FUN_01543a70();
        local_90 = local_88;
        if (local_80[0] == '\0') {
          if (((local_88 != (code *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
             (local_88 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80[0] = '\0';
        }
        if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (local_90 != (code *)0x0) {
          local_80[0] = '\0';
          local_88 = (code *)0x0;
          local_78 = local_90;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar23 = -local_70._4_4_;
              }
              else {
                iVar23 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar23);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar23 = 0;
              }
              local_70 = CONCAT44(iVar23,(int)local_70);
            }
            lVar9 = (longlong)(int)local_70;
            iVar23 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar23);
            if (*(int *)(local_78 + 0xc) <= iVar23) break;
            lVar21 = *(longlong *)(local_78 + 0x10);
            local_88 = *(code **)(lVar21 + 8 + lVar9 * 8);
            pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
            pVar19 = (pthread_key_t)lVar21;
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017db850();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_150 = FUN_01507970();
            if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017db850();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_170 = FUN_01508610();
            if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
              FUN_00d50b20();
            }
            local_1b8 = FUN_00e7bdb0();
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017e11f0();
            pcVar11 = local_c0;
            if (local_b8[0] == '\0') {
              if (local_c0 != (code *)0x0) {
                FUN_00d50b00();
                if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_015406d0;
              }
            }
            else if (local_c0 != (code *)0x0) {
LAB_015406d0:
              local_b8[0] = '\0';
              local_c0 = (code *)0x0;
              local_b0 = pcVar11;
              local_a8 = 0xffffffff;
              local_a0 = 0;
              local_a8._4_4_ = 0;
              local_60 = (code *)0x0;
              pcVar11 = (code *)0x0;
              while( true ) {
                if (local_a8._4_4_ != 0) {
                  if (local_a8._4_4_ < 1) {
                    iVar23 = -local_a8._4_4_;
                  }
                  else {
                    iVar23 = (int)local_a8 - local_a8._4_4_;
                    local_a8 = CONCAT44(local_a8._4_4_,iVar23);
                    FUN_00d23690();
                    local_a0 = local_a0 + local_a8._4_4_;
                    iVar23 = 0;
                  }
                  local_a8 = CONCAT44(iVar23,(int)local_a8);
                }
                lVar9 = (longlong)(int)local_a8;
                iVar23 = (int)local_a8 + 1;
                local_a8 = CONCAT44(local_a8._4_4_,iVar23);
                if (*(int *)(local_b0 + 0xc) <= iVar23) break;
                lVar21 = *(longlong *)(local_b0 + 0x10);
                pcVar17 = *(code **)(lVar21 + 8 + lVar9 * 8);
                local_c0 = pcVar17;
                pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
                pcVar22 = local_c0;
                pVar19 = (pthread_key_t)lVar21;
                if ((pvVar10 != (void *)0x0) &&
                   (lVar9 = FUN_00e8b990(), pcVar17 = pcVar22, lVar9 != 0)) {
                  pcVar17 = *(code **)(pcVar22 +
                                      (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
                }
                if (*(longlong *)(pcVar17 + 0x80) == 0) {
                  pvVar10 = _pthread_getspecific(pVar19);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_017db850();
                  pvVar10 = _pthread_getspecific(pVar19);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_1a0 = FUN_01507970();
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    FUN_00d50b20();
                  }
                  pvVar10 = _pthread_getspecific(pVar19);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_017db850();
                  pvVar10 = _pthread_getspecific(pVar19);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_198 = FUN_01508610();
                  if ((local_d0 != '\0') && (local_d8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (((((local_170._4_4_ != 0) && (local_1a0._4_4_ != 0)) &&
                       (cVar3 = FUN_00e7c020(), cVar3 != '\0')) &&
                      ((local_150._4_4_ != 0 && (local_198._4_4_ != 0)))) &&
                     (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                    if ((local_1a0._4_4_ != 0) && (local_150._4_4_ != 0)) {
                      FUN_00e7c020();
                    }
                    puVar15 = &local_170;
                    if ((local_198._4_4_ != 0) && (local_170._4_4_ != 0)) {
                      cVar3 = FUN_00e7c020();
                      if (cVar3 != '\0') {
                        puVar15 = &local_198;
                      }
                    }
                    local_d8 = *puVar15;
                    FUN_00e7b970();
                    uVar14 = local_d8;
                    if (((local_d8 >> 0x20 == 0) || (local_1b8._4_4_ == 0)) ||
                       (cVar3 = FUN_00e7c020(), pcVar17 = local_c0, cVar3 == '\0')) {
LAB_0154070c:
                      uVar14 = (ulonglong)local_60 & 0xffffffff;
                    }
                    else {
                      local_1b8 = uVar14;
                      uVar25 = (undefined7)((ulonglong)&local_170 >> 8);
                      if (local_c0 == pcVar11) {
                        if (((byte)local_60 != '\0') || (local_c0 == (code *)0x0))
                        goto LAB_0154070c;
                        pcVar17 = pcVar11;
                        if (local_b8[0] == '\0') {
                          uVar14 = CONCAT71(uVar25,1);
                          FUN_00d50b00();
                          goto LAB_01540712;
                        }
LAB_01540ad0:
                        local_b8[0] = '\0';
                      }
                      else {
                        if (local_b8[0] != '\0') {
                          if (((byte)local_60 != '\0') && (pcVar11 != (code *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_01540ad0;
                        }
                        if (local_c0 != (code *)0x0) {
                          FUN_00d50b00();
                        }
                        uVar14 = CONCAT71(uVar25,1);
                        if (((byte)local_60 != '\0') && (pcVar11 != (code *)0x0)) {
                          FUN_00d50b20();
                          pcVar11 = pcVar17;
                          goto LAB_01540712;
                        }
                      }
                      uVar14 = CONCAT71(uVar25,1);
                      pcVar11 = pcVar17;
                    }
LAB_01540712:
                    local_60 = (code *)(uVar14 & 0xffffffff);
                  }
                }
              }
              pcVar17 = local_b0;
              FUN_01916320();
              pVar19 = (pthread_key_t)pcVar17;
              FUN_00d50b20();
              if (pcVar11 != (code *)0x0) {
                pvVar10 = _pthread_getspecific(pVar19);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1d0 = '\0';
                local_1d8 = pcVar11;
                FUN_017de970();
                if ((local_1d0 != '\0') && (local_1d8 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar10 = _pthread_getspecific(pVar19);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c8 = local_88;
                local_1c0 = '\0';
                FUN_017de9f0();
                if ((local_1c0 != '\0') && (local_1c8 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar10 = _pthread_getspecific(pVar19);
                if ((pvVar10 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                  *(code **)(pcVar11 + 0x80) = local_88;
                }
                else {
                  *(code **)(*(longlong *)
                              (pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20) +
                            0x80) = local_88;
                }
                if ((byte)local_60 != '\0') {
                  FUN_00d50b20();
                }
              }
            }
          }
          pcVar11 = local_78;
          FUN_01916320();
          pVar19 = (pthread_key_t)pcVar11;
        }
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e11f0();
        pcVar11 = local_88;
        if (local_80[0] == '\0') {
          if (local_88 != (code *)0x0) {
            FUN_00d50b00();
            if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01540d40;
          }
        }
        else if (local_88 != (code *)0x0) {
LAB_01540d40:
          local_80[0] = '\0';
          local_88 = (code *)0x0;
          local_78 = pcVar11;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar23 = -local_70._4_4_;
              }
              else {
                iVar23 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar23);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar23 = 0;
              }
              local_70 = CONCAT44(iVar23,(int)local_70);
            }
            lVar9 = (longlong)(int)local_70;
            iVar23 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar23);
            if (*(int *)(local_78 + 0xc) <= iVar23) break;
            pcVar11 = *(code **)(*(longlong *)(local_78 + 0x10) + 8 + lVar9 * 8);
            local_88 = pcVar11;
            pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
            pcVar17 = local_88;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar11 = pcVar17, lVar9 != 0))
            {
              pcVar11 = *(code **)(pcVar17 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
            }
            *(longlong *)(pcVar11 + 0x80) = 0;
          }
          pcVar11 = local_78;
          FUN_01916320();
          pVar19 = (pthread_key_t)pcVar11;
          FUN_00d50b20();
        }
        if (local_90 != (code *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((int)local_40 != 0 || local_38 != 0) {
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e11f0();
        pcVar11 = local_88;
        if (local_80[0] == '\0') {
          if (local_88 != (code *)0x0) {
            FUN_00d50b00();
            if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01540eb0;
          }
        }
        else if (local_88 != (code *)0x0) {
LAB_01540eb0:
          local_80[0] = '\0';
          local_88 = (code *)0x0;
          local_78 = pcVar11;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar23 = -local_70._4_4_;
              }
              else {
                iVar23 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar23);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar23 = 0;
              }
              local_70 = CONCAT44(iVar23,(int)local_70);
            }
            lVar9 = (longlong)(int)local_70;
            iVar23 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar23);
            if (*(int *)(local_78 + 0xc) <= iVar23) break;
            lVar21 = *(longlong *)(local_78 + 0x10);
            local_88 = *(code **)(lVar21 + 8 + lVar9 * 8);
            pvVar10 = _pthread_getspecific((pthread_key_t)lVar21);
            pVar19 = (pthread_key_t)lVar21;
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_017dde10();
            if ((uVar14 & 4) != 0) {
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017dde10();
              FUN_017dde20();
            }
            pvVar10 = _pthread_getspecific(pVar19);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_017dde10();
            if ((uVar14 & 8) != 0) {
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar10 = _pthread_getspecific(pVar19);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017dde10();
              FUN_017dde20();
            }
          }
          FUN_01916320();
          FUN_00d50b20();
        }
      }
    }
    pcVar11 = local_48;
    FUN_0154ef60();
    pVar19 = (pthread_key_t)pcVar11;
  }
  local_150 = CONCAT44(local_150._4_4_,0xffffffff);
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e11f0();
  pcVar11 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (code *)0x0) {
      FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01541163;
    }
  }
  else if (local_58 != (code *)0x0) {
LAB_01541163:
    local_50[0] = '\0';
    local_58 = (code *)0x0;
    local_160 = pcVar11;
    local_48 = pcVar11;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_110 = DAT_025683d8;
    local_90 = (code *)&DAT_025683c0;
    local_e0 = (code *)0x0;
    while( true ) {
      lVar9 = (longlong)(int)local_40;
      iVar23 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar23);
      if (*(int *)(local_48 + 0xc) <= iVar23) break;
      lVar21 = *(longlong *)(local_48 + 0x10);
      local_58 = *(code **)(lVar21 + 8 + lVar9 * 8);
      puVar12 = (undefined8 *)FUN_00e8fc40();
      pVar19 = (pthread_key_t)lVar21;
      FUN_00d4ff40();
      *puVar12 = local_90;
      (*local_110)();
      FUN_00c92170();
      FUN_00c92160();
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_017dca70();
      iVar23 = *(int *)(puVar12 + 3);
      FUN_00c8e340();
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      pVar19 = (iVar4 >> 0x1f & 0xcU) + iVar4;
      *(pthread_key_t *)(puVar12[2] + (longlong)iVar23) = pVar19;
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017de9c0();
      pcVar11 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (code *)0x0) {
          FUN_00d50b00();
          if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01541360;
        }
      }
      else if (local_88 != (code *)0x0) {
LAB_01541360:
        local_80[0] = '\0';
        local_88 = (code *)0x0;
        local_78 = pcVar11;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar23 = -local_70._4_4_;
            }
            else {
              iVar23 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar23);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar23 = 0;
            }
            local_70 = CONCAT44(iVar23,(int)local_70);
          }
          lVar9 = (longlong)(int)local_70;
          iVar23 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar23);
          if (*(int *)(local_78 + 0xc) <= iVar23) break;
          local_88 = *(code **)(*(longlong *)(local_78 + 0x10) + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_017dca70();
          iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
          iVar6 = (iVar6 >> 0x1f & 0xcU) + iVar6;
          iVar23 = *(int *)(puVar12 + 3);
          lVar9 = (longlong)iVar23;
          iVar4 = iVar23 + 3;
          if (-1 < lVar9) {
            iVar4 = iVar23;
          }
          if (3 < lVar9) {
            iVar4 = iVar4 >> 2;
            lVar21 = 0;
            do {
              if (*(int *)(puVar12[2] + lVar21 * 4) == iVar6) goto LAB_01541390;
              lVar21 = lVar21 + 1;
            } while (iVar4 != (int)lVar21);
          }
          FUN_00c8e340(iVar4,1);
          *(int *)(puVar12[2] + lVar9) = iVar6;
LAB_01541390:
        }
        pcVar11 = local_78;
        FUN_01916320();
        pVar19 = (pthread_key_t)pcVar11;
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017db850();
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_01508bf0();
      if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(uVar13,1,0,0);
      pcVar11 = local_88;
      local_c0 = (code *)CONCAT71(local_c0._1_7_,local_80[0]);
      ppcVar18 = (code **)local_80;
      if (local_80[0] == '\0') {
        ppcVar18 = &local_c0;
      }
      *(char *)ppcVar18 = '\0';
      if ((local_80[0] != '\0') && (pcVar11 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_c0 == '\0') && (pcVar11 != (code *)0x0)) {
        FUN_00d50b00();
      }
      iVar23 = *(int *)(puVar12 + 3);
      local_60 = pcVar11;
      iVar6 = FUN_01717720();
      iVar4 = iVar23 + 3;
      if (-1 < iVar23) {
        iVar4 = iVar23;
      }
      bVar2 = true;
      bVar24 = true;
      if ((iVar4 >> 2 == iVar6) && (iVar23 = FUN_01717720(), iVar23 == *(int *)(local_130 + 0xc))) {
        iVar23 = 0;
LAB_01541640:
        iVar4 = *(int *)(puVar12 + 3);
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        pVar19 = iVar6 >> 2;
        if (iVar23 < (int)pVar19) goto code_r0x01541654;
        pcVar11 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(undefined **)pcVar11 = local_120;
        (*local_118)();
        local_88 = local_58;
        local_80[0] = '\0';
        local_c8 = pcVar11;
        FUN_00d21140();
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(pVar19);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017de9c0();
        pcVar11 = local_c0;
        if (local_b8[0] == '\0') {
          if (local_c0 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_b8[0] = '\0';
        }
        local_88 = pcVar11;
        local_80[0] = '\0';
        FUN_00d214d0();
        if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (pcVar11 != (code *)0x0) {
          FUN_00d50b20();
        }
        if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_80[0] = '\0';
        local_88 = (code *)0x0;
        local_78 = local_c8;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar23 = -local_70._4_4_;
            }
            else {
              iVar23 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar23);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar23 = 0;
            }
            local_70 = CONCAT44(iVar23,(int)local_70);
          }
          lVar9 = (longlong)(int)local_70;
          iVar23 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar23);
          if (*(int *)(local_78 + 0xc) <= iVar23) break;
          local_88 = *(code **)(*(longlong *)(local_78 + 0x10) + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017ddb20();
          FUN_00d23340();
          pcVar11 = local_c0;
          local_170 = CONCAT71(local_170._1_7_,local_b8[0]);
          puVar15 = &local_170;
          puVar16 = (ulonglong *)local_b8;
          if (local_b8[0] == '\0') {
            puVar16 = puVar15;
          }
          *(undefined1 *)puVar16 = 0;
          if ((local_b8[0] != '\0') && (pcVar11 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pVar19 = (pthread_key_t)puVar15;
          if (((char)local_170 == '\0') && (pcVar11 != (code *)0x0)) {
            FUN_00d50b00();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar19);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(pVar19);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017dca70();
          FUN_0171a210();
          FUN_017e1530();
          pvVar10 = _pthread_getspecific(pVar19);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(pVar19);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017dca70();
          FUN_017e1590();
          if (pcVar11 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar13 = FUN_01916320();
        local_e0 = (code *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        if (local_c8 != (code *)0x0) {
          FUN_00d50b20();
        }
        bVar2 = false;
        bVar24 = false;
      }
joined_r0x01541a72:
      if (local_60 != (code *)0x0) {
        FUN_00d50b20();
        bVar24 = bVar2;
      }
      if (puVar12 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar24) break;
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar23 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar23 = 0;
        }
        local_40 = CONCAT44(iVar23,(int)local_40);
      }
    }
    FUN_01916320();
    FUN_00d50b20();
    if (((ulonglong)local_e0 & 1) != 0) {
LAB_01541a9f:
      if (local_f0 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_130 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_108 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_138 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (local_128 != (code *)0x0) {
        FUN_00d50b20();
      }
LAB_01541af4:
      if (local_168 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (code *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    goto LAB_01541b31;
  }
  local_e0 = (code *)0x0;
LAB_01541b31:
  local_c8 = DAT_025683d8;
  pcVar11 = (code *)CONCAT71((int7)((ulonglong)DAT_025683d8 >> 8),1);
  local_60 = (code *)CONCAT44(local_60._4_4_,(int)pcVar11);
  bVar24 = false;
  local_110 = (code *)&DAT_025683c0;
LAB_01541b7d:
  pVar19 = (pthread_key_t)pcVar11;
  pcVar17 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(code **)pcVar17 = local_110;
  (*local_c8)();
  FUN_00c92170();
  FUN_00c92160();
  local_90 = pcVar17;
  if (local_130 != (code *)0x0) {
    local_50[0] = '\0';
    local_58 = (code *)0x0;
    local_48 = local_130;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (((ulonglong)local_60 & 1) == 0) {
      if (bVar24) {
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar23 = -local_40._4_4_;
            }
            else {
              iVar23 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar23);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar23 = 0;
            }
            local_40 = CONCAT44(iVar23,(int)local_40);
          }
          lVar9 = (longlong)(int)local_40;
          iVar23 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar23);
          if (*(int *)(local_48 + 0xc) <= iVar23) break;
          pcVar11 = *(code **)(*(longlong *)(local_48 + 0x10) + 8 + lVar9 * 8);
          local_58 = pcVar11;
          pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar11 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          iVar23 = *(int *)(local_90 + 0x18);
          iVar4 = iVar23 + 3;
          if (-1 < iVar23) {
            iVar4 = iVar23;
          }
          if (3 < iVar23) {
            iVar23 = *(int *)(pcVar11 + 0x58);
            iVar23 = iVar23 + (((uint)(iVar23 / 6 + (iVar23 >> 0x1f)) >> 1) - (iVar23 >> 0x1f)) *
                              -0xc;
            uVar20 = (iVar23 >> 0x1f & 0xcU) + iVar23;
            pcVar11 = (code *)(ulonglong)uVar20;
            lVar9 = 0;
            do {
              if (*(uint *)(*(longlong *)(local_90 + 0x10) + lVar9 * 4) == uVar20)
              goto LAB_01541ec0;
              lVar9 = lVar9 + 1;
            } while (iVar4 >> 2 != (int)lVar9);
          }
        }
      }
      else {
        while( true ) {
          lVar9 = (longlong)(int)local_40;
          uVar20 = (int)local_40 + 1;
          local_40 = (ulonglong)uVar20;
          if (*(int *)(local_130 + 0xc) <= (int)uVar20) break;
          local_58 = *(code **)(*(longlong *)(local_130 + 0x10) + 8 + lVar9 * 8);
          iVar23 = *(int *)(pcVar17 + 0x18);
          iVar4 = iVar23 + 3;
          if (-1 < iVar23) {
            iVar4 = iVar23;
          }
          if (3 < iVar23) {
            pcVar11 = (code *)(ulonglong)(uint)(iVar4 >> 2);
            lVar9 = 0;
            do {
              if (*(int *)(*(longlong *)(pcVar17 + 0x10) + lVar9 * 4) == 8) goto LAB_01541ec0;
              lVar9 = lVar9 + 1;
            } while (iVar4 >> 2 != (uint)lVar9);
          }
        }
      }
    }
    else {
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar23 = -local_40._4_4_;
          }
          else {
            iVar23 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar23);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar23 = 0;
          }
          local_40 = CONCAT44(iVar23,(int)local_40);
        }
        lVar9 = (longlong)(int)local_40;
        iVar23 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar23);
        if (*(int *)(local_48 + 0xc) <= iVar23) break;
        pcVar11 = *(code **)(*(longlong *)(local_48 + 0x10) + 8 + lVar9 * 8);
        local_58 = pcVar11;
        pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar11 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        iVar23 = *(int *)(local_90 + 0x18);
        iVar4 = iVar23 + 3;
        if (-1 < iVar23) {
          iVar4 = iVar23;
        }
        if (3 < iVar23) {
          iVar23 = *(int *)(pcVar11 + 0x54);
          iVar23 = iVar23 + (((uint)(iVar23 / 6 + (iVar23 >> 0x1f)) >> 1) - (iVar23 >> 0x1f)) * -0xc
          ;
          uVar20 = (iVar23 >> 0x1f & 0xcU) + iVar23;
          pcVar11 = (code *)(ulonglong)uVar20;
          lVar9 = 0;
          do {
            if (*(uint *)(*(longlong *)(local_90 + 0x10) + lVar9 * 4) == uVar20) goto LAB_01541ec0;
            lVar9 = lVar9 + 1;
          } while (iVar4 >> 2 != (int)lVar9);
        }
      }
    }
    pVar19 = (pthread_key_t)local_48;
    FUN_0154ef60();
  }
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e11f0();
  FUN_00d23340();
  pcVar11 = local_58;
  local_d8 = CONCAT71(local_d8._1_7_,local_50[0]);
  puVar15 = &local_d8;
  puVar16 = (ulonglong *)local_50;
  if (local_50[0] == '\0') {
    puVar16 = puVar15;
  }
  *(char *)puVar16 = '\0';
  if ((local_50[0] != '\0') && (pcVar11 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pVar19 = (pthread_key_t)puVar15;
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db850();
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01508bf0();
  if ((local_80[0] != '\0') && (local_88 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d8 != '\0') && (pcVar11 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8[0] != '\0') && (local_c0 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar19);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(uVar13,1,0,0);
  pcVar17 = local_58;
  local_88 = (code *)CONCAT71(local_88._1_7_,local_50[0]);
  ppcVar18 = (code **)local_50;
  if (local_50[0] == '\0') {
    ppcVar18 = &local_88;
  }
  *(char *)ppcVar18 = '\0';
  if ((local_50[0] != '\0') && (pcVar17 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 == '\0') && (pcVar17 != (code *)0x0)) {
    FUN_00d50b00();
  }
  local_50[0] = '\0';
  local_58 = (code *)0x0;
  local_48 = local_130;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    uVar14 = local_40;
    lVar9 = (longlong)(int)local_40;
    iVar23 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar23);
    if (*(int *)(local_48 + 0xc) <= iVar23) break;
    pcVar11 = *(code **)(local_48 + 0x10);
    local_58 = *(code **)(pcVar11 + lVar9 * 8 + 8);
    if (((ulonglong)local_60 & 1) == 0) {
      pvVar10 = _pthread_getspecific((pthread_key_t)pcVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
    }
    else {
      pvVar10 = _pthread_getspecific((pthread_key_t)pcVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
    }
    cVar3 = FUN_01716980();
    pVar19 = (pthread_key_t)pcVar11;
    if (cVar3 == '\0') {
      FUN_0154ef60();
      goto joined_r0x01542305;
    }
    pvVar10 = _pthread_getspecific(pVar19);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (((ulonglong)local_60 & 1) == 0) {
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
    }
    else {
      pvVar10 = _pthread_getspecific(pVar19);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
    }
    FUN_0171a210();
    FUN_017e1530();
    pvVar10 = _pthread_getspecific(pVar19);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017e1590();
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar23 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar23 = 0;
      }
      local_40 = CONCAT44(iVar23,(int)local_40);
    }
  }
  local_e0 = (code *)CONCAT71((int7)(int3)(uVar14 >> 8),1);
  pcVar11 = local_48;
  FUN_0154ef60();
joined_r0x01542305:
  if (pcVar17 != (code *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01542329;
code_r0x01541654:
  cVar3 = FUN_01716980();
  iVar23 = iVar23 + 1;
  if (cVar3 == '\0') goto joined_r0x01541a72;
  goto LAB_01541640;
LAB_01541ec0:
  FUN_0154ef60();
LAB_01542329:
  if (local_90 != (code *)0x0) {
    FUN_00d50b20();
  }
  bVar24 = true;
  bVar1 = (byte)local_60 & ((ulonglong)local_e0 & 1) == 0;
  local_60 = (code *)((ulonglong)local_60 & 0xffffffff00000000);
  if (bVar1 == 0) goto LAB_01541a9f;
  goto LAB_01541b7d;
}


