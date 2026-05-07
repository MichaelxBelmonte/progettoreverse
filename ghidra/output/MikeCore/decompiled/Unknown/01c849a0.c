// Function: FUN_01c849a0
// Address: 01c849a0
// Size: 2797 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c84ae6) */
/* WARNING: Removing unreachable block (ram,0x01c84ad6) */
/* WARNING: Removing unreachable block (ram,0x01c8547c) */
/* WARNING: Removing unreachable block (ram,0x01c85488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c849a0(pthread_key_t param_1,double param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint extraout_XMM0_Db;
  uint uVar15;
  double dVar12;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  double dVar13;
  double dVar14;
  double dVar16;
  double dVar17;
  undefined8 in_XMM1_Qb;
  double dVar18;
  undefined1 auVar19 [16];
  double local_118;
  float fStack_64;
  double local_58;
  longlong local_40;
  char local_38;
  
  iVar5 = FUN_01d3a5a0();
  if (iVar5 == 5) {
    FUN_01d3abf0();
    uVar10 = FUN_01e466c0();
    uVar11 = FUN_01e3f820();
    auVar19._8_4_ = (int)in_XMM1_Qb;
    auVar19._0_8_ = param_2;
    auVar19._12_4_ = (int)((ulonglong)in_XMM1_Qb >> 0x20);
    auVar19 = blendps(auVar19,_DAT_0241ee40,0xd);
    param_2 = (double)CONCAT44((int)((ulonglong)uVar11 >> 0x20),
                               (float)uVar11 + DAT_0240d174 + SUB84(param_2,0));
    cVar4 = FUN_00d05410((int)uVar10,param_2,auVar19._0_8_);
    fVar8 = (float)((ulonglong)param_2 >> 0x20);
    if (cVar4 == '\0') {
      FUN_01e4ac90();
    }
    else {
      dVar13 = (double)(float)((ulonglong)uVar10 >> 0x20);
      FUN_01e3f820();
      param_2 = dVar13;
      if ((dVar13 <= (double)fVar8 * _DAT_0241ee50) ||
         (FUN_01e3f820(), (double)(float)((ulonglong)param_2 >> 0x20) * _DAT_0241ee58 <= dVar13)) {
        FUN_01c4b7c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e4ac90();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01c4b550();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e4ac90();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 7) && (iVar5 = FUN_01d3b650(), iVar5 == 0)) {
    fVar8 = (float)FUN_01d3b640();
    _pow(SUB84((double)(float)(_DAT_02390140 & (uint)fVar8),0));
    uVar15 = extraout_XMM0_Db;
    if (fVar8 < 0.0) {
      uVar15 = extraout_XMM0_Db ^ _UNK_023945b4;
    }
    local_58 = (double)((ulonglong)uVar15 << 0x20);
    dVar13 = (double)FUN_01c5c4d0(0);
    dVar16 = (double)FUN_01c5c4d0(DAT_02390124);
    dVar13 = (double)_pow(SUB84(dVar13 / dVar16,0));
    dVar16 = (double)FUN_01c5c4b0();
    dVar17 = (double)FUN_01c5c4c0();
    if (((dVar13 < DAT_0238fee8) && (dVar12 = (double)FUN_01c5c4b0(), _DAT_0241eeb8 < dVar12)) ||
       ((DAT_0238fee8 < dVar13 &&
        (dVar12 = (double)FUN_01c5c4c0(), local_58 = DAT_0241ea58, dVar12 < DAT_0241ea58)))) {
      uVar9 = SUB84(_DAT_0241eeb8,0);
      if (_DAT_0241eeb8 <= dVar16 * dVar13) {
        uVar9 = SUB84(dVar16 * dVar13,0);
      }
      dVar16 = DAT_0241ea58;
      if (dVar17 * dVar13 <= DAT_0241ea58) {
        dVar16 = dVar17 * dVar13;
      }
      local_58 = dVar16;
      FUN_01c5c360(uVar9);
      FUN_01c5c400(SUB84(dVar16,0));
    }
    fVar8 = (float)((ulonglong)local_58 >> 0x20);
    (**(code **)(*unaff_RDI + 0x620))();
    iVar5 = FUN_01d3a5a0();
  }
  else {
    iVar5 = FUN_01d3a5a0();
  }
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    iVar5 = FUN_01d3b620();
    if (1 < iVar5) {
      FUN_01c51a50();
      (**(code **)(*unaff_RDI + 0x620))();
      return;
    }
    FUN_01d3abf0();
    FUN_01e466c0();
    dVar13 = (double)extraout_XMM0_Db_00;
    FUN_01e3f820();
    if ((dVar13 <= (double)fVar8 * _DAT_0241ee50) ||
       (dVar16 = dVar13, FUN_01e3f820(),
       (double)(float)((ulonglong)dVar16 >> 0x20) * _DAT_0241ee58 <= dVar13)) {
      FUN_01c4b7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01e4ac90();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
    }
    else {
      FUN_01c4b550();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01e4ac90();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = true;
    }
    dVar16 = (double)unaff_RDI[0x2a];
    local_58 = (double)FUN_01c5c4d0(0);
    dVar17 = (double)FUN_01c5c4d0(DAT_02390124);
    local_58 = local_58 / dVar17;
    dVar17 = local_58;
    FUN_01e3f820();
    if (dVar13 <= (double)(float)((ulonglong)dVar17 >> 0x20) * _DAT_0241ee50) {
      local_58 = DAT_0238fee8 / local_58;
    }
    FUN_01c42960();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fStack_64 = extraout_XMM0_Db_00;
    if (local_40 == 0) {
      local_118 = DAT_02395720;
    }
    else {
      FUN_01c42960();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = (double)FUN_016cd860();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01c85350:
    (**(code **)(*unaff_RDI + 0x658))();
    lVar1 = *unaff_RSI;
    if (lVar1 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_01c853f1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01c853ec;
      }
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01c853ec:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01c853f1:
        lVar7 = *unaff_RSI;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_40;
        lVar7 = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
          lVar7 = *unaff_RSI;
        }
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      if (lVar7 == 0) goto LAB_01c85427;
    }
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 6) goto LAB_01c85427;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      dVar13 = (double)_pow(SUB84(local_58,0),(double)(extraout_XMM0_Db_01 - fStack_64));
      fStack_64 = extraout_XMM0_Db_01;
      if ((dVar13 != DAT_0238fee8) || (NAN(dVar13) || NAN(DAT_0238fee8))) {
        dVar17 = (double)FUN_01c5c4b0();
        dVar12 = (double)FUN_01c5c4c0();
        if (bVar2) {
          FUN_01c4b550();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e4ac90();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          dVar18 = dVar13 * dVar17;
          dVar14 = dVar13 * dVar12;
          if (((dVar13 < DAT_0238fee8) && (_DAT_0241eeb8 < dVar17)) ||
             ((DAT_0238fee8 < dVar13 && (dVar12 < DAT_0241ea58)))) goto LAB_01c852f6;
        }
        else {
          FUN_01c4b7c0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e4ac90();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          dVar14 = (double)_pow(SUB84(SQRT(dVar12 / dVar17),0),DAT_0238fee8 / dVar13);
          dVar18 = local_118 / dVar14;
          dVar14 = dVar14 * local_118;
          if (dVar13 < DAT_0238fee8) {
            if (dVar17 <= _DAT_0241eeb8) {
              dVar14 = dVar12 / dVar13;
              dVar18 = _DAT_0241eeb8;
            }
            else if (DAT_0241ea58 <= dVar12) {
              dVar18 = dVar13 * dVar17;
              dVar14 = DAT_0241ea58;
            }
          }
LAB_01c852f6:
          dVar13 = _DAT_0241eeb8;
          if (_DAT_0241eeb8 <= dVar18) {
            dVar13 = dVar18;
          }
          dVar17 = DAT_0241ea58;
          if (dVar14 <= DAT_0241ea58) {
            dVar17 = dVar14;
          }
          FUN_01c5c360(SUB84(dVar13,0));
          FUN_01c5c400(SUB84(dVar17,0));
        }
        (**(code **)(*unaff_RDI + 0x620))();
      }
    }
    goto LAB_01c85350;
  }
LAB_01c85453:
  FUN_01e459c0();
  return;
LAB_01c85427:
  if (((double)unaff_RDI[0x2a] != dVar16) || (NAN((double)unaff_RDI[0x2a]) || NAN(dVar16))) {
    unaff_RDI[0x2a] = (longlong)dVar16;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  goto LAB_01c85453;
}


