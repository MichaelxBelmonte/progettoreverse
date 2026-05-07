// Function: FUN_01641e90
// Address: 01641e90
// Size: 3466 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_01641e90(double param_1,uint param_2)

{
  void*puVar1;
  void*puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  bool bVar6;
  double dVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int64_t lVar39;
  void*puVar40;
  int64_t lVar41;
  uint64_t uVar42;
  int64_t lVar43;
  int64_t lVar44;
  int64_t lVar45;
  void*puVar46;
  void*puVar47;
  float *pfVar48;
  uint64_t uVar49;
  int iVar50;
  uint64_t uVar51;
  int64_t lVar52;
  int64_t lVar53;
  float *arg1;
  uint64_t uVar54;
  int64_t lVar55;
  uint64_t uVar56;
  uint64_t this_ptr;
  int iVar57;
  uint64_t uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  int local_8c;
  uint64_t local_78;
  int64_t local_70;
  char local_68;
  
  uVar58 = (uint64_t)param_2;
  fVar61 = (float)(g_024113c8 * param_1);
  uVar35 = FUN_00e7d780((float)(int)(param_2 - 1) / fVar61);
  if ((int)uVar35 < 1) {
    lVar39 = FUN_00e83020();
    return lVar39;
  }
  lVar39 = FUN_00e83010();
  puVar40 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar40 = &g_02572358;
  (*g_02572370)();
  lVar41 = FUN_00e83020();
  uVar42 = FUN_00e83010();
  lVar43 = FUN_00e83010();
  lVar44 = FUN_00e83010();
  lVar45 = FUN_00e83010();
  if (0 < (int)param_2) {
    if ((param_2 < 8) || ((uVar42 < this_ptr + uVar58 * 4 && (this_ptr < uVar42 + uVar58 * 4)))) {
      uVar49 = 0;
    }
    else {
      uVar49 = (uint64_t)(param_2 & 0xfffffff8);
      uVar51 = (uVar49 - 8 >> 3) + 1;
      uVar54 = (uint64_t)((uint)uVar51 & 3);
      if (uVar49 - 8 < 0x18) {
        lVar55 = 0;
      }
      else {
        lVar53 = -(uVar51 & 0xfffffffffffffffc);
        lVar55 = 0;
        do {
          puVar46 = (void*)(this_ptr + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(this_ptr + 0x10 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar42 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar42 + 0x10 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar46 = (void*)(this_ptr + 0x20 + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(this_ptr + 0x30 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar42 + 0x20 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar42 + 0x30 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar46 = (void*)(this_ptr + 0x40 + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(this_ptr + 0x50 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar42 + 0x40 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar42 + 0x50 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar1 = (void*)(this_ptr + 0x60 + lVar55 * 4);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (void*)(this_ptr + 0x70 + lVar55 * 4);
          uVar11 = *puVar2;
          uVar12 = puVar2[1];
          uVar13 = puVar2[2];
          uVar14 = puVar2[3];
          puVar2 = (void*)(uVar42 + 0x60 + lVar55 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          puVar1 = (void*)(uVar42 + 0x70 + lVar55 * 4);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          lVar55 = lVar55 + 0x20;
          lVar53 = lVar53 + 4;
        } while (lVar53 != 0);
      }
      if (uVar54 != 0) {
        lVar53 = uVar42 + lVar55 * 4;
        lVar55 = this_ptr + lVar55 * 4;
        lVar52 = 0;
        do {
          puVar2 = (void*)(lVar55 + lVar52);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar1 = (void*)(lVar55 + 0x10 + lVar52);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar1 = (void*)(lVar53 + lVar52);
          *puVar1 = *puVar2;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (void*)(lVar53 + 0x10 + lVar52);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          lVar52 = lVar52 + 0x20;
        } while (uVar54 << 5 != lVar52);
      }
      if (uVar49 == uVar58) goto LAB_01642154;
    }
    uVar51 = ~uVar49;
    uVar54 = uVar58 & 3;
    if ((param_2 & 3) != 0) {
      do {
        *(void*)(uVar42 + uVar49 * 4) = *(void*)(this_ptr + uVar49 * 4);
        uVar49 = uVar49 + 1;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
    }
    if (2 < uVar51 + uVar58) {
      do {
        *(void*)(uVar42 + uVar49 * 4) = *(void*)(this_ptr + uVar49 * 4);
        *(void*)(uVar42 + 4 + uVar49 * 4) = *(void*)(this_ptr + 4 + uVar49 * 4);
        *(void*)(uVar42 + 8 + uVar49 * 4) = *(void*)(this_ptr + 8 + uVar49 * 4);
        *(void*)(uVar42 + 0xc + uVar49 * 4) = *(void*)(this_ptr + 0xc + uVar49 * 4);
        uVar49 = uVar49 + 4;
      } while (uVar58 != uVar49);
    }
  }
LAB_01642154:
  if (arg1 != (float *)0x0) {
    if (1 < (int)param_2) {
      dVar7 = g_0240deb0 * param_1;
      local_78 = 0;
      uVar49 = 1;
      local_8c = 0;
      fVar62 = *arg1;
      do {
        fVar59 = arg1[uVar49];
        iVar57 = (int)uVar49;
        if ((fVar62 < g_023b4df0) || (g_023b4df0 <= fVar59)) {
LAB_01642233:
          if (fVar59 < g_023b4df0) goto LAB_01642276;
LAB_01642268:
          if (g_023b4df0 <= fVar62) goto LAB_01642276;
LAB_01642295:
          FUN_014328b0(SUB84((double)local_8c + g_023942d0,0));
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          FUN_014328b0(SUB84((double)iVar57 + g_023942d0,0));
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_78 = uVar49 & 0xffffffff;
        }
        else {
          if (iVar57 - (int)local_78 < (int)dVar7) {
            FUN_00d23740();
            FUN_00d23740();
            goto LAB_01642233;
          }
          local_8c = iVar57;
          if (g_023b4df0 <= fVar59) goto LAB_01642268;
LAB_01642276:
          if ((param_2 - 1 == uVar49) && (fVar59 < g_023b4df0)) goto LAB_01642295;
        }
        uVar49 = uVar49 + 1;
        fVar62 = fVar59;
      } while (uVar58 != uVar49);
    }
    uVar38 = *(uint *)((int64_t)puVar40 + 0xc);
    if (0 < (int)uVar38) {
      lVar53 = puVar40[2];
      uVar49 = 0;
      do {
        uVar36 = (uint)*(double *)(*(int64_t *)(lVar53 + uVar49 * 8) + 0x10);
        iVar57 = (int)*(double *)(*(int64_t *)(lVar53 + (uVar49 * 8 | 8)) + 0x10);
        if ((int)(uVar36 + 1) < iVar57) {
          fVar62 = *(float *)(uVar42 + (int64_t)(int)uVar36 * 4);
          fVar59 = (*(float *)(uVar42 + (int64_t)iVar57 * 4) - fVar62) /
                   (float)(int)(iVar57 - uVar36);
          lVar55 = (int64_t)(int)(uVar36 + 1);
          for (uVar37 = ~uVar36 + iVar57 & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
            fVar62 = fVar62 + fVar59;
            *(float *)(uVar42 + lVar55 * 4) = fVar62;
            lVar55 = lVar55 + 1;
          }
          if (2 < (iVar57 - uVar36) - 2) {
            do {
              *(float *)(uVar42 + lVar55 * 4) = fVar62 + fVar59;
              fVar62 = fVar62 + fVar59 + fVar59;
              *(float *)(uVar42 + 4 + lVar55 * 4) = fVar62;
              fVar62 = fVar62 + fVar59;
              *(float *)(uVar42 + 8 + lVar55 * 4) = fVar62;
              fVar62 = fVar62 + fVar59;
              *(float *)(uVar42 + 0xc + lVar55 * 4) = fVar62;
              lVar55 = lVar55 + 4;
            } while (iVar57 != (int)lVar55);
          }
        }
        uVar49 = uVar49 + 2;
      } while (uVar49 < uVar38);
    }
  }
  uVar49 = FUN_00e83010();
  if (0 < (int)param_2) {
    if ((param_2 < 8) || ((uVar49 < uVar42 + uVar58 * 4 && (uVar42 < uVar49 + uVar58 * 4)))) {
      uVar51 = 0;
    }
    else {
      uVar51 = (uint64_t)(param_2 & 0xfffffff8);
      uVar54 = (uVar51 - 8 >> 3) + 1;
      uVar56 = (uint64_t)((uint)uVar54 & 3);
      if (uVar51 - 8 < 0x18) {
        lVar55 = 0;
      }
      else {
        lVar53 = -(uVar54 & 0xfffffffffffffffc);
        lVar55 = 0;
        do {
          puVar46 = (void*)(uVar42 + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(uVar42 + 0x10 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar49 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar49 + 0x10 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar46 = (void*)(uVar42 + 0x20 + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(uVar42 + 0x30 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar49 + 0x20 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar49 + 0x30 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar46 = (void*)(uVar42 + 0x40 + lVar55 * 4);
          uVar32 = puVar46[1];
          puVar47 = (void*)(uVar42 + 0x50 + lVar55 * 4);
          uVar33 = *puVar47;
          uVar34 = puVar47[1];
          puVar47 = (void*)(uVar49 + 0x40 + lVar55 * 4);
          *puVar47 = *puVar46;
          puVar47[1] = uVar32;
          puVar46 = (void*)(uVar49 + 0x50 + lVar55 * 4);
          *puVar46 = uVar33;
          puVar46[1] = uVar34;
          puVar1 = (void*)(uVar42 + 0x60 + lVar55 * 4);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar46 = (void*)(uVar42 + 0x70 + lVar55 * 4);
          uVar32 = *puVar46;
          uVar33 = puVar46[1];
          puVar2 = (void*)(uVar49 + 0x60 + lVar55 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          puVar46 = (void*)(uVar49 + 0x70 + lVar55 * 4);
          *puVar46 = uVar32;
          puVar46[1] = uVar33;
          lVar55 = lVar55 + 0x20;
          lVar53 = lVar53 + 4;
        } while (lVar53 != 0);
      }
      if (uVar56 != 0) {
        lVar53 = uVar49 + lVar55 * 4;
        lVar55 = uVar42 + lVar55 * 4;
        lVar52 = 0;
        do {
          puVar1 = (void*)(lVar55 + lVar52);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar46 = (void*)(lVar55 + 0x10 + lVar52);
          uVar32 = *puVar46;
          uVar33 = puVar46[1];
          puVar2 = (void*)(lVar53 + lVar52);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          puVar46 = (void*)(lVar53 + 0x10 + lVar52);
          *puVar46 = uVar32;
          puVar46[1] = uVar33;
          lVar52 = lVar52 + 0x20;
        } while (uVar56 << 5 != lVar52);
      }
      if (uVar51 == uVar58) goto LAB_01642654;
    }
    uVar54 = ~uVar51;
    uVar56 = uVar58 & 3;
    if ((param_2 & 3) != 0) {
      do {
        *(void*)(uVar49 + uVar51 * 4) = *(void*)(uVar42 + uVar51 * 4);
        uVar51 = uVar51 + 1;
        uVar56 = uVar56 - 1;
      } while (uVar56 != 0);
    }
    if (2 < uVar54 + uVar58) {
      do {
        *(void*)(uVar49 + uVar51 * 4) = *(void*)(uVar42 + uVar51 * 4);
        *(void*)(uVar49 + 4 + uVar51 * 4) = *(void*)(uVar42 + 4 + uVar51 * 4);
        *(void*)(uVar49 + 8 + uVar51 * 4) = *(void*)(uVar42 + 8 + uVar51 * 4);
        *(void*)(uVar49 + 0xc + uVar51 * 4) = *(void*)(uVar42 + 0xc + uVar51 * 4);
        uVar51 = uVar51 + 4;
      } while (uVar58 != uVar51);
    }
  }
LAB_01642654:
  puVar46 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar46 = &g_025f0d98;
  puVar46[2] = 0;
  puVar46[3] = 0;
  puVar46[4] = 0;
  puVar46[5] = 0;
  puVar46[6] = 0;
  puVar46[7] = 0;
  (*g_025f0db0)();
  FUN_015c1480((float)(param_1 / g_0240f0f0) * g_023b8c38);
  if (0 < (int)param_2) {
    if ((param_2 < 8) || ((uVar42 < uVar49 + uVar58 * 4 && (uVar49 < uVar42 + uVar58 * 4)))) {
      uVar51 = 0;
    }
    else {
      uVar51 = (uint64_t)(param_2 & 0xfffffff8);
      uVar54 = (uVar51 - 8 >> 3) + 1;
      if (uVar51 - 8 == 0) {
        lVar53 = 0;
LAB_01642845:
        pfVar48 = (float *)(uVar42 + lVar53 * 4);
        fVar62 = pfVar48[1];
        fVar59 = pfVar48[2];
        fVar60 = pfVar48[3];
        pfVar3 = (float *)(uVar42 + 0x10 + lVar53 * 4);
        fVar63 = *pfVar3;
        fVar5 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar3 = (float *)(uVar49 + lVar53 * 4);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar4 = (float *)(uVar49 + 0x10 + lVar53 * 4);
        fVar20 = *pfVar4;
        fVar21 = pfVar4[1];
        fVar22 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar4 = (float *)(uVar42 + lVar53 * 4);
        *pfVar4 = *pfVar48 - *pfVar3;
        pfVar4[1] = fVar62 - fVar17;
        pfVar4[2] = fVar59 - fVar18;
        pfVar4[3] = fVar60 - fVar19;
        pfVar48 = (float *)(uVar42 + 0x10 + lVar53 * 4);
        *pfVar48 = fVar63 - fVar20;
        pfVar48[1] = fVar5 - fVar21;
        pfVar48[2] = fVar15 - fVar22;
        pfVar48[3] = fVar16 - fVar23;
      }
      else {
        lVar55 = -(uVar54 & 0xfffffffffffffffe);
        lVar53 = 0;
        do {
          pfVar48 = (float *)(uVar49 + lVar53 * 4);
          fVar62 = pfVar48[1];
          fVar59 = pfVar48[2];
          fVar60 = pfVar48[3];
          pfVar3 = (float *)(uVar49 + 0x10 + lVar53 * 4);
          fVar63 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar3 = (float *)(uVar42 + lVar53 * 4);
          fVar17 = pfVar3[1];
          fVar18 = pfVar3[2];
          fVar19 = pfVar3[3];
          pfVar4 = (float *)(uVar42 + 0x10 + lVar53 * 4);
          fVar20 = *pfVar4;
          fVar21 = pfVar4[1];
          fVar22 = pfVar4[2];
          fVar23 = pfVar4[3];
          pfVar4 = (float *)(uVar42 + 0x20 + lVar53 * 4);
          fVar24 = *pfVar4;
          fVar25 = pfVar4[1];
          fVar26 = pfVar4[2];
          fVar27 = pfVar4[3];
          pfVar4 = (float *)(uVar42 + 0x30 + lVar53 * 4);
          fVar28 = *pfVar4;
          fVar29 = pfVar4[1];
          fVar30 = pfVar4[2];
          fVar31 = pfVar4[3];
          pfVar4 = (float *)(uVar42 + lVar53 * 4);
          *pfVar4 = *pfVar3 - *pfVar48;
          pfVar4[1] = fVar17 - fVar62;
          pfVar4[2] = fVar18 - fVar59;
          pfVar4[3] = fVar19 - fVar60;
          pfVar48 = (float *)(uVar42 + 0x10 + lVar53 * 4);
          *pfVar48 = fVar20 - fVar63;
          pfVar48[1] = fVar21 - fVar5;
          pfVar48[2] = fVar22 - fVar15;
          pfVar48[3] = fVar23 - fVar16;
          pfVar48 = (float *)(uVar49 + 0x20 + lVar53 * 4);
          fVar62 = pfVar48[1];
          fVar59 = pfVar48[2];
          fVar60 = pfVar48[3];
          pfVar3 = (float *)(uVar49 + 0x30 + lVar53 * 4);
          fVar63 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar3 = (float *)(uVar42 + 0x20 + lVar53 * 4);
          *pfVar3 = fVar24 - *pfVar48;
          pfVar3[1] = fVar25 - fVar62;
          pfVar3[2] = fVar26 - fVar59;
          pfVar3[3] = fVar27 - fVar60;
          pfVar48 = (float *)(uVar42 + 0x30 + lVar53 * 4);
          *pfVar48 = fVar28 - fVar63;
          pfVar48[1] = fVar29 - fVar5;
          pfVar48[2] = fVar30 - fVar15;
          pfVar48[3] = fVar31 - fVar16;
          lVar53 = lVar53 + 0x10;
          lVar55 = lVar55 + 2;
        } while (lVar55 != 0);
        if ((uVar54 & 1) != 0) goto LAB_01642845;
      }
      if (uVar51 == uVar58) goto LAB_01642877;
    }
    uVar54 = ~uVar51;
    uVar56 = uVar58 & 3;
    if ((param_2 & 3) != 0) {
      do {
        *(float *)(uVar42 + uVar51 * 4) =
             *(float *)(uVar42 + uVar51 * 4) - *(float *)(uVar49 + uVar51 * 4);
        uVar51 = uVar51 + 1;
        uVar56 = uVar56 - 1;
      } while (uVar56 != 0);
    }
    if (2 < uVar54 + uVar58) {
      do {
        *(float *)(uVar42 + uVar51 * 4) =
             *(float *)(uVar42 + uVar51 * 4) - *(float *)(uVar49 + uVar51 * 4);
        *(float *)(uVar42 + 4 + uVar51 * 4) =
             *(float *)(uVar42 + 4 + uVar51 * 4) - *(float *)(uVar49 + 4 + uVar51 * 4);
        *(float *)(uVar42 + 8 + uVar51 * 4) =
             *(float *)(uVar42 + 8 + uVar51 * 4) - *(float *)(uVar49 + 8 + uVar51 * 4);
        *(float *)(uVar42 + 0xc + uVar51 * 4) =
             *(float *)(uVar42 + 0xc + uVar51 * 4) - *(float *)(uVar49 + 0xc + uVar51 * 4);
        uVar51 = uVar51 + 4;
      } while (uVar58 != uVar51);
    }
  }
LAB_01642877:
  FUN_00e83070();
  puVar47 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar47 = &g_024c1200;
  *(void*)((int64_t)puVar47 + 0xc) = 0;
  *(void*)((int64_t)puVar47 + 0x14) = 0;
  *(void*)((int64_t)puVar47 + 0x1c) = 0;
  FUN_00d500e0();
  FUN_00e3d400();
  if (0 < (int)uVar35) {
    uVar49 = 0;
    do {
      lVar53 = 0;
      fVar62 = 0.0;
      do {
        uVar51 = (uint64_t)((int)((float)(int)uVar49 * fVar61) - 0x100) + lVar53;
        fVar59 = 0.0;
        iVar57 = (int)uVar51;
        if ((-1 < iVar57) && (iVar57 < (int)param_2)) {
          fVar59 = *(float *)(uVar42 + (uVar51 & 0xffffffff) * 4);
        }
        *(float *)(lVar43 + lVar53 * 4) = fVar59;
        *(float *)(lVar44 + lVar53 * 4) = fVar59;
        fVar62 = fVar62 + fVar59 * fVar59;
        lVar53 = lVar53 + 1;
      } while (lVar53 != 0x200);
      ___bzero();
      FUN_00e3db90();
      fVar59 = g_0239011c;
      lVar53 = 0;
      pfVar48 = (float *)(lVar45 + 0x7fc);
      do {
        *(float *)(lVar45 + 4 + lVar53 * 4) =
             (*(float *)(lVar45 + 4 + lVar53 * 4) + *pfVar48) * fVar59;
        *(float *)(lVar45 + 8 + lVar53 * 4) =
             (*(float *)(lVar45 + 8 + lVar53 * 4) + pfVar48[-1]) * fVar59;
        *(float *)(lVar45 + 0xc + lVar53 * 4) =
             (*(float *)(lVar45 + 0xc + lVar53 * 4) + pfVar48[-2]) * fVar59;
        lVar53 = lVar53 + 3;
        pfVar48 = pfVar48 + -3;
      } while (lVar53 != 0xff);
      fVar59 = 0.0;
      lVar53 = 0x28;
      fVar60 = *(float *)(lVar45 + 0x9c);
      fVar63 = g_02390d00;
      do {
        fVar5 = *(float *)(lVar45 + lVar53 * 4);
        bVar6 = 0.0 <= fVar63;
        fVar63 = fVar5 - fVar60;
        if ((((bVar6) && (0.0 < fVar60)) && (fVar63 < 0.0)) &&
           (fVar60 = *(float *)(lVar45 + -4 + lVar53 * 4), fVar59 < fVar60)) {
          fVar59 = fVar60;
        }
        lVar53 = lVar53 + 1;
        fVar60 = fVar5;
      } while (lVar53 != 0x6e);
      fVar60 = g_023b4df0;
      if (g_023d7d68 <= (double)(fVar62 * g_02411288)) {
        fVar60 = (fVar59 * g_02411288) / (fVar62 * g_02411288);
      }
      *(float *)(lVar39 + uVar49 * 4) = fVar60;
      uVar49 = uVar49 + 1;
    } while (uVar49 != uVar35);
    if (puVar47 == (void*)0x0) goto joined_r0x01642aea;
  }
  FUN_00d50b20();
joined_r0x01642aea:
  if (0 < (int)param_2) {
    uVar42 = 0;
    do {
      uVar38 = FUN_00e7d780((float)(int)uVar42 / fVar61);
      if ((int)uVar35 <= (int)uVar38) {
        uVar38 = uVar35 - 1;
      }
      if (-1 < (int)uVar38) {
        *(void*)(lVar41 + uVar42 * 4) = *(void*)(lVar39 + (uint64_t)uVar38 * 4);
      }
      uVar42 = uVar42 + 1;
    } while (uVar58 != uVar42);
  }
  uVar35 = *(uint *)((int64_t)puVar40 + 0xc);
  if (0 < (int)uVar35) {
    lVar39 = puVar40[2];
    uVar58 = 0;
    do {
      iVar57 = (int)*(double *)(*(int64_t *)(lVar39 + uVar58 * 8) + 0x10);
      iVar50 = iVar57 + 1;
      if (iVar50 < (int)*(double *)(*(int64_t *)(lVar39 + 8 + uVar58 * 8) + 0x10)) {
        ___bzero(iVar57,(int64_t)iVar50);
      }
      uVar58 = uVar58 + 2;
    } while (uVar58 < uVar35);
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if (puVar46 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return lVar41;
}

