// Function: FUN_013fa1f0
// Address: 013fa1f0
// Size: 2202 bytes
// Class: MUDataPointFunction


void FUN_013fa1f0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  longlong unaff_RSI;
  longlong *plVar13;
  undefined8 *unaff_RDI;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  double local_a8;
  double local_98;
  double dStack_90;
  undefined1 local_78 [16];
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  local_50 = *(longlong *)(unaff_RSI + 0x48);
  iVar14 = *(int *)(local_50 + 0xc);
  local_58[0] = '\0';
  local_60 = 0;
  local_48 = -1;
  iStack_44 = 0;
  local_40 = 0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_a8 = 0.0;
  local_78 = ZEXT816(0);
LAB_013fa25e:
  iVar15 = -1;
  do {
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
    lVar6 = (longlong)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(local_50 + 0xc) <= local_48) {
      lVar6 = local_50;
      FUN_01a81420();
      pVar11 = (pthread_key_t)lVar6;
      if (iVar14 == 0) {
        plVar10 = (longlong *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))(0,DAT_0238fee8);
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))((int)DAT_0238fee8,DAT_0238fee8);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        dVar17 = (double)iVar14;
        uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
        auVar18._8_4_ = SUB84(dVar17,0);
        auVar18._0_8_ = dVar17;
        auVar18._12_4_ = uVar16;
        auVar18 = divpd(local_78,auVar18);
        auVar5._8_8_ = dStack_90;
        auVar5._0_8_ = local_98;
        auVar20._8_4_ = SUB84(dVar17,0);
        auVar20._0_8_ = dVar17;
        auVar20._12_4_ = uVar16;
        auVar20 = divpd(auVar5,auVar20);
        dVar17 = auVar18._8_8_;
        dVar19 = (auVar20._0_8_ - dVar17 * auVar18._0_8_) / (auVar20._8_8_ - dVar17 * dVar17);
        dVar17 = auVar18._0_8_ - dVar17 * dVar19;
        plVar10 = (longlong *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        if ((NAN(dVar17)) || (NAN(dVar19))) {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,DAT_0238fee8);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          FUN_00d23340();
          pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_58[0]);
          pcVar12 = local_38;
          if (local_58[0] != '\0') {
            pcVar12 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar12 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          lVar6 = local_60;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          (**(code **)(*plVar13 + 0x418))((int)*(undefined8 *)(lVar6 + 0x38),DAT_0238fee8);
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,dVar17);
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if (iVar15 != -1) {
            pvVar7 = _pthread_getspecific(pVar11);
            plVar13 = plVar10;
            if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            lVar6 = *(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10);
            lVar9 = *(longlong *)(lVar6 + (longlong)iVar15 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar6);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            (**(code **)(*plVar13 + 0x418))((int)*(undefined8 *)(lVar9 + 0x38),dVar17);
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (iVar15 != *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0xc) + -1) {
              FUN_00d23340();
              pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar6 >> 8),local_58[0]);
              pcVar12 = local_38;
              if (local_58[0] != '\0') {
                pcVar12 = local_58;
              }
              local_38[0] = local_58[0];
              *pcVar12 = '\0';
              if ((local_58[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              if ((pvVar7 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                dVar4 = *(double *)(local_60 + 0x38);
              }
              else {
                dVar4 = *(double *)
                         (*(longlong *)
                           (local_60 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x38)
                ;
              }
              if ((local_38[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              plVar13 = plVar10;
              if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              dVar17 = dVar17 + dVar19 * dVar4;
              dVar19 = DAT_0240e410;
              if (DAT_0240e410 <= dVar17) {
                dVar19 = dVar17;
              }
              (**(code **)(*plVar13 + 0x418))(SUB84(dVar4,0),dVar19);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      *unaff_RDI = plVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    lVar9 = *(longlong *)(local_50 + 0x10);
    local_60 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
    if (iVar15 == -1) {
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
      lVar6 = local_60;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (local_a8 <= *(double *)(lVar6 + 0x40)) break;
      iVar15 = local_40 + local_48;
    }
    pVar11 = (pthread_key_t)lVar9;
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar17 = local_78._8_8_ + *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar4 = local_78._0_8_;
    dVar19 = *(double *)(lVar6 + 0x40);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    local_98 = dVar3 * *(double *)(lVar6 + 0x40) + local_98;
    dStack_90 = dStack_90 + dVar1 * dVar2;
    local_78._8_4_ = SUB84(dVar17,0);
    local_78._0_8_ = dVar4 + dVar19;
    local_78._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  } while( true );
  pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
  lVar6 = local_60;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
  }
  iVar14 = iVar14 + -1;
  local_a8 = *(double *)(lVar6 + 0x40);
  goto LAB_013fa25e;
}


