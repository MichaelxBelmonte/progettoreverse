// Function: FUN_019452a0
// Address: 019452a0
// Size: 3282 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019459e3) */
/* WARNING: Removing unreachable block (ram,0x019459ef) */
/* WARNING: Removing unreachable block (ram,0x01945c52) */
/* WARNING: Removing unreachable block (ram,0x01945c5b) */
/* WARNING: Removing unreachable block (ram,0x01945432) */
/* WARNING: Removing unreachable block (ram,0x0194543b) */
/* WARNING: Removing unreachable block (ram,0x01945957) */
/* WARNING: Removing unreachable block (ram,0x01945964) */
/* WARNING: Removing unreachable block (ram,0x01945cde) */
/* WARNING: Removing unreachable block (ram,0x01945cea) */
/* WARNING: Removing unreachable block (ram,0x019454ef) */
/* WARNING: Removing unreachable block (ram,0x01945510) */
/* WARNING: Removing unreachable block (ram,0x019454f1) */
/* WARNING: Removing unreachable block (ram,0x01945512) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019452a0(float param_1,float param_2)

{
  double dVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float extraout_XMM0_Db;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_118;
  char local_110;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  local_48 = local_70;
  (**(code **)(*unaff_RDI + 0x9b0))();
  if (local_70 == 0) {
    bVar8 = true;
  }
  else {
    (**(code **)(*unaff_RDI + 0x9b0))();
    bVar8 = *(int *)((longlong)local_40 + 0xc) == 0;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x9b0))();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  lVar4 = 0;
  dVar14 = (double)FUN_012912a0(0,0,0);
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328ff0();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  FUN_01e436c0();
  if (local_70 != 0) {
    fVar9 = param_2 + param_1 + DAT_02390d00;
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    fVar10 = DAT_023908d8 + extraout_XMM0_Db + DAT_02394210;
LAB_019454eb:
    lVar4 = (longlong)local_58;
    local_58 = local_58 + 1;
    if (local_58 < *(int *)(local_48 + 0xc)) {
      local_70 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_014bb640();
      uVar11 = (**(code **)(*unaff_RDI + 0x938))();
      dVar1 = (double)unaff_RDI[0xba];
      (**(code **)(*unaff_RDI + 0xed0))();
      iVar2 = (**(code **)(*local_40 + 0x3e0))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar12 = DAT_02390124;
      if (iVar2 != 2) goto code_r0x019455ee;
      goto LAB_01945650;
    }
    lVar4 = local_48;
    FUN_01481520();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01329770();
  if (local_48 == local_70) {
LAB_01945b5a:
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      bVar8 = local_48 != 0;
      local_48 = local_70;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01945b5a;
    }
    bVar8 = local_48 != 0;
    local_48 = local_70;
    if (bVar8) {
      FUN_00d50b20();
    }
  }
  FUN_01cfbc00();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01cfd130();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar9 = *(float *)((longlong)unaff_RDI + 0x5cc);
  if ((*(float *)(local_70 + 0x1c) != fVar9) || (NAN(*(float *)(local_70 + 0x1c)) || NAN(fVar9))) {
    if (0.0 <= fVar9) {
      if (fVar9 <= DAT_02390124) {
        *(float *)(local_70 + 0x1c) = fVar9;
        fVar9 = fVar9 * DAT_02394220;
      }
      else {
        *(undefined4 *)(local_70 + 0x1c) = 0x3f800000;
        fVar9 = DAT_02394220;
      }
    }
    else {
      *(undefined4 *)(local_70 + 0x1c) = 0;
      fVar9 = 0.0;
    }
    auVar17 = ZEXT416(_DAT_023945e0 & (uint)fVar9) | _DAT_023945f0;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = auVar17._0_4_ + fVar9;
    auVar17 = roundss(ZEXT816(0),auVar18,0xb);
    *(char *)(local_70 + 0xf) = (char)(longlong)auVar17._0_4_;
  }
  FUN_01d488d0();
  FUN_01d48b40();
  if (local_48 != 0) {
    if (0 < *(int *)(local_48 + 0xc)) {
      fVar9 = extraout_XMM0_Db + DAT_023908d8 + DAT_02394210;
      lVar7 = 0;
      do {
        plVar6 = *(longlong **)(*(longlong *)(local_48 + 0x10) + lVar7 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_014bae60();
        (**(code **)(&UNK_00001668 + *unaff_RDI))();
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = (float)FUN_0132db30();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (fVar12 < fVar10) {
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          lVar5 = (**(code **)(*plVar6 + 0x3a0))();
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_01327990();
          auVar16._0_8_ = (**(code **)(*unaff_RDI + 0x938))((double)lVar5 / dVar14);
          auVar16._8_8_ = extraout_XMM0_Qb;
          auVar17 = roundss(auVar16,auVar16,9);
          auVar17 = insertps(auVar17,fVar9,0x10);
          plVar6 = (longlong *)*unaff_RSI;
          FUN_01d39b10(auVar17._0_8_);
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          (**(code **)(*plVar6 + 0x3a8))();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_48 + 0xc));
    }
    FUN_01481520();
    if (local_70 == 0) goto LAB_01945fa3;
  }
  FUN_00d50b20();
LAB_01945fa3:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
code_r0x019455ee:
  fVar12 = (float)((dVar15 + dVar14) - dVar1);
  fVar12 = (float)(~-(uint)(fVar12 < DAT_0239424c) & (uint)fVar12 |
                  ((uint)fVar12 ^ _DAT_023945e0) & -(uint)(fVar12 < DAT_0239424c));
  fVar13 = DAT_02390d34 - (fVar12 + fVar12);
  fVar12 = DAT_0239011c;
  if ((DAT_0239011c < fVar13) || (fVar12 = fVar13, DAT_0239424c <= fVar13)) {
LAB_01945650:
    FUN_01cfcdc0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    auVar17 = roundss(ZEXT816(0),ZEXT416(uVar11),9);
    if ((param_1 <= auVar17._0_4_ + DAT_02390124) && (auVar17._0_4_ + DAT_02390d00 <= fVar9)) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    }
    FUN_01d48b40();
    plVar6 = (longlong *)*unaff_RSI;
    insertps(auVar17,fVar10,0x10);
    FUN_01d39b10();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar6 + 0x3a0))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfbc00();
    if (local_110 == '\0') {
      if (local_118 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_110 = '\0';
    }
    FUN_01cfd130();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_118 != 0) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    fVar12 = fVar12 * *(float *)((longlong)unaff_RDI + 0x5cc);
    if ((*(float *)((longlong)local_40 + 0x1c) != fVar12) ||
       (NAN(*(float *)((longlong)local_40 + 0x1c)) || NAN(fVar12))) {
      if (0.0 <= fVar12) {
        if (fVar12 <= DAT_02390124) {
          *(float *)((longlong)local_40 + 0x1c) = fVar12;
          fVar12 = fVar12 * DAT_02394220;
        }
        else {
          *(undefined4 *)((longlong)local_40 + 0x1c) = 0x3f800000;
          fVar12 = DAT_02394220;
        }
      }
      else {
        *(undefined4 *)((longlong)local_40 + 0x1c) = 0;
        fVar12 = 0.0;
      }
      auVar17 = ZEXT416((uint)fVar12 & _DAT_023945e0) | _DAT_023945f0;
      auVar17._0_4_ = auVar17._0_4_ + fVar12;
      auVar17 = roundss(auVar17,auVar17,0xb);
      *(char *)((longlong)local_40 + 0xf) = (char)(longlong)auVar17._0_4_;
    }
    FUN_01d488d0();
    FUN_01d48b40();
    plVar6 = (longlong *)*unaff_RSI;
    FUN_01d39b10();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar6 + 0x3a8))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  goto LAB_019454eb;
}


