// Function: FUN_007fd7a0
// Address: 007fd7a0
// Size: 1704 bytes
// Class: MDExportAudioController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fd7a0(undefined4 param_1,float param_2,undefined8 param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float in_XMM4_Da;
  longlong local_78;
  char local_70;
  float local_68;
  float local_64;
  longlong local_60;
  char local_58;
  float local_4c;
  undefined1 local_48 [16];
  float local_34;
  
  lVar3 = DAT_0272fae8;
  if (DAT_0272fae8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_78 = lVar3;
  local_70 = '\x01';
  FUN_000175c0(param_1,&local_78);
  lVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_4c = DAT_02390124;
  if (*(char *)(lVar3 + 0xd0) != '\0') {
    local_4c = *(float *)(lVar3 + 0xe8);
  }
  lVar9 = *(longlong *)(lVar3 + 0xb8);
  *(undefined4 *)(lVar3 + 0xe0) = 0;
  local_34 = 0.0;
  local_48 = ZEXT816(0);
  do {
    if ((lVar9 < 1) || (*(char *)(lVar3 + 0xd4) != '\0')) break;
    uVar6 = 0;
    if ((int)DAT_0280d348 < lVar9) {
      uVar6 = DAT_0280d348;
    }
    uVar6 = (int)lVar9 - uVar6;
    if ((longlong)(int)DAT_0280d348 * 2 < lVar9) {
      uVar6 = DAT_0280d348;
    }
    uVar11 = (ulonglong)uVar6;
    FUN_00ae9740(2);
    if (0 < (int)uVar6) {
      *(longlong *)(lVar3 + 0xc0) = *(longlong *)(lVar3 + 0xc0) + uVar11;
    }
    (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x400))(uVar11,*(undefined8 *)(lVar3 + 0xb0));
    iVar10 = uVar6 - 1;
    if ((local_4c != DAT_02390124) || (NAN(local_4c) || NAN(DAT_02390124))) {
      pfVar8 = (float *)**(undefined8 **)(lVar3 + 0xb0);
      (**(code **)(DAT_02786500 + 0x20))();
      local_68 = (float)local_48._0_4_;
      fVar13 = local_34;
      if (uVar6 != 0) {
        iVar2 = iVar10;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          param_2 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          if (!NAN(fVar13)) {
            fVar12 = fVar13;
            if (fVar13 <= local_34) {
              fVar12 = local_34;
            }
            param_2 = fVar13;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            local_34 = fVar12;
            if ((float)local_48._0_4_ <= fVar13) {
              param_2 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
            }
          }
          pfVar8 = pfVar8 + 1;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = param_2;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          iVar2 = uVar6 - 2;
          param_4 = param_2;
          in_XMM4_Da = local_34;
        }
        local_68 = param_4;
        fVar13 = in_XMM4_Da;
        if (uVar6 != 1) {
          lVar7 = 0;
          fVar12 = (float)local_48._0_4_;
          fVar13 = local_34;
          do {
            param_2 = fVar13;
            local_68 = pfVar8[lVar7];
            if (NAN(local_68)) {
LAB_007fdb35:
              local_68 = fVar12;
            }
            else {
              fVar13 = local_68;
              if (local_68 <= param_2) {
                fVar13 = param_2;
              }
              param_2 = fVar13;
              if (fVar12 <= local_68) goto LAB_007fdb35;
            }
            fVar12 = pfVar8[lVar7 + 1];
            fVar13 = param_2;
            if (!NAN(fVar12)) {
              fVar13 = fVar12;
              if (fVar12 <= param_2) {
                fVar13 = param_2;
              }
              if (fVar12 < local_68) {
                local_68 = fVar12;
              }
            }
            lVar7 = lVar7 + 2;
            fVar12 = local_68;
          } while (iVar2 + 1 != (int)lVar7);
        }
      }
      pfVar8 = *(float **)(*(longlong *)(lVar3 + 0xb0) + 8);
      local_64 = fVar13;
      fVar12 = (float)(**(code **)(DAT_02786500 + 0x20))(local_4c);
      param_4 = local_64;
      in_XMM4_Da = fVar13;
      if (uVar6 == 0) {
        local_34 = local_64;
        local_48 = ZEXT416((uint)local_68);
        fVar12 = local_68;
      }
      else {
        fVar13 = local_68;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          if (NAN(fVar13)) {
            local_34 = local_64;
            fVar12 = local_68;
          }
          else {
            local_34 = fVar13;
            if (fVar13 <= local_64) {
              local_34 = local_64;
            }
            fVar12 = local_68;
            param_2 = local_34;
            if (fVar13 < local_68) {
              fVar12 = fVar13;
              param_2 = fVar13;
            }
          }
          pfVar8 = pfVar8 + 1;
          iVar10 = uVar6 - 2;
          local_48 = ZEXT416((uint)fVar12);
          fVar13 = fVar12;
          param_4 = local_34;
        }
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48 = ZEXT416((uint)fVar13);
          local_34 = param_4;
          do {
            fVar13 = pfVar8[lVar7];
            if (NAN(fVar13)) {
              fVar17 = pfVar8[lVar7 + 1];
              param_2 = local_34;
              if (!NAN(fVar17)) goto LAB_007fdd4a;
LAB_007fdd10:
              local_48._4_4_ = 0;
              fVar12 = (float)local_48._0_4_;
              auVar4 = local_48;
            }
            else {
              param_2 = fVar13;
              if (fVar13 <= local_34) {
                param_2 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              if ((float)local_48._0_4_ <= fVar13) {
                fVar13 = (float)local_48._0_4_;
                uVar14 = local_48._8_4_;
                uVar15 = local_48._12_4_;
              }
              fVar17 = pfVar8[lVar7 + 1];
              local_48._0_4_ = fVar13;
              local_48._8_4_ = uVar14;
              local_48._12_4_ = uVar15;
              local_34 = param_2;
              if (NAN(fVar17)) goto LAB_007fdd10;
LAB_007fdd4a:
              param_4 = fVar17;
              if (fVar17 <= local_34) {
                param_4 = local_34;
              }
              fVar12 = (float)local_48._0_4_;
              param_2 = local_34;
              auVar4 = ZEXT416((uint)fVar17);
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar17) goto LAB_007fdd10;
            }
            local_48 = auVar4;
            lVar7 = lVar7 + 2;
          } while (iVar10 + 1 != (int)lVar7);
        }
      }
    }
    else {
      fVar12 = local_4c;
      if (uVar6 != 0) {
        pfVar8 = (float *)**(undefined8 **)(lVar3 + 0xb0);
        iVar2 = iVar10;
        fVar12 = local_4c;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        fVar17 = param_2;
        fVar13 = local_34;
        auVar4 = local_48;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          fVar12 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          if (!NAN(fVar13)) {
            fVar17 = fVar13;
            if (fVar13 <= local_34) {
              fVar17 = local_34;
            }
            fVar12 = fVar13;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            local_34 = fVar17;
            if ((float)local_48._0_4_ <= fVar13) {
              fVar12 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
            }
          }
          pfVar8 = pfVar8 + 1;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = fVar12;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          iVar2 = uVar6 - 2;
          fVar17 = local_34;
          fVar13 = local_34;
          auVar4 = local_48;
        }
        local_34 = fVar17;
        local_48._12_4_ = uVar16;
        local_48._8_4_ = uVar15;
        local_48._4_4_ = uVar14;
        local_48._0_4_ = fVar12;
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48._0_4_ = auVar4._0_4_;
          local_48._4_4_ = auVar4._4_4_;
          local_48._8_4_ = auVar4._8_4_;
          local_48._12_4_ = auVar4._12_4_;
          local_34 = fVar13;
          do {
            fVar12 = pfVar8[lVar7];
            if (NAN(fVar12)) {
LAB_007fdb85:
              fVar12 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
              param_4 = local_34;
            }
            else {
              param_4 = fVar12;
              if (fVar12 <= local_34) {
                param_4 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar12) goto LAB_007fdb85;
            }
            local_48._12_4_ = uVar16;
            local_48._8_4_ = uVar15;
            local_48._4_4_ = uVar14;
            local_48._0_4_ = fVar12;
            fVar12 = pfVar8[lVar7 + 1];
            local_34 = param_4;
            if (!NAN(fVar12)) {
              local_34 = fVar12;
              if (fVar12 <= param_4) {
                local_34 = param_4;
              }
              if (fVar12 < (float)local_48._0_4_) {
                local_48._0_4_ = fVar12;
                local_48._4_4_ = 0;
                local_48._8_4_ = 0;
                local_48._12_4_ = 0;
              }
            }
            lVar7 = lVar7 + 2;
          } while (iVar2 + 1 != (int)lVar7);
        }
        pfVar8 = (float *)(*(undefined8 **)(lVar3 + 0xb0))[1];
        fVar12 = (float)local_48._0_4_;
        uVar14 = local_48._4_4_;
        uVar15 = local_48._8_4_;
        uVar16 = local_48._12_4_;
        param_2 = local_34;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          if (!NAN(fVar13)) {
            param_4 = fVar13;
            if (fVar13 <= local_34) {
              param_4 = local_34;
            }
            local_34 = param_4;
            if (fVar13 < (float)local_48._0_4_) {
              local_48._4_4_ = 0;
              local_48._8_4_ = 0;
              local_48._12_4_ = 0;
              local_48._0_4_ = fVar13;
            }
          }
          pfVar8 = pfVar8 + 1;
          iVar10 = uVar6 - 2;
          fVar12 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          auVar4 = local_48;
          param_2 = local_34;
          fVar13 = local_34;
        }
        local_34 = fVar13;
        local_48 = auVar4;
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = fVar12;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          local_34 = param_2;
          do {
            fVar13 = pfVar8[lVar7];
            if (NAN(fVar13)) {
              fVar17 = pfVar8[lVar7 + 1];
              param_2 = local_34;
              if (!NAN(fVar17)) goto LAB_007fdbea;
LAB_007fdbb0:
              fVar12 = (float)local_48._0_4_;
              auVar4 = local_48;
            }
            else {
              param_2 = fVar13;
              if (fVar13 <= local_34) {
                param_2 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              if ((float)local_48._0_4_ <= fVar13) {
                fVar13 = (float)local_48._0_4_;
                uVar14 = local_48._4_4_;
                uVar15 = local_48._8_4_;
                uVar16 = local_48._12_4_;
              }
              fVar17 = pfVar8[lVar7 + 1];
              local_48._0_4_ = fVar13;
              local_48._4_4_ = uVar14;
              local_48._8_4_ = uVar15;
              local_48._12_4_ = uVar16;
              local_34 = param_2;
              if (NAN(fVar17)) goto LAB_007fdbb0;
LAB_007fdbea:
              param_4 = fVar17;
              if (fVar17 <= local_34) {
                param_4 = local_34;
              }
              fVar12 = (float)local_48._0_4_;
              param_2 = local_34;
              auVar4 = ZEXT416((uint)fVar17);
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar17) goto LAB_007fdbb0;
            }
            local_48 = auVar4;
            lVar7 = lVar7 + 2;
          } while (iVar10 + 1 != (int)lVar7);
        }
      }
    }
    lVar9 = lVar9 - (int)uVar6;
    if ((lVar9 < 0) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x5e8))(fVar12),
       fVar12 = extraout_XMM0_Da, cVar5 == '\0')) {
      param_2 = 0.0;
      if ((int)uVar6 < 1) break;
      lVar7 = (longlong)(int)uVar6 + 1;
      while( true ) {
        uVar6 = (uint)uVar11;
        fVar12 = *(float *)(**(longlong **)(lVar3 + 0xb0) + -8 + lVar7 * 4);
        bVar1 = true;
        if ((fVar12 != 0.0) || (NAN(fVar12))) break;
        fVar12 = *(float *)((*(longlong **)(lVar3 + 0xb0))[1] + -8 + lVar7 * 4);
        if ((fVar12 != 0.0) || (NAN(fVar12))) break;
        uVar11 = (ulonglong)(uVar6 - 1);
        lVar7 = lVar7 + -1;
        if (lVar7 < 2) goto LAB_007fdd8f;
      }
    }
    else {
      bVar1 = false;
    }
    if (0 < (int)uVar6) {
      FUN_00b87ba0(fVar12,uVar6);
    }
  } while (!bVar1);
LAB_007fdd8f:
  FUN_0141cb10();
  lVar9 = local_60;
  if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_0141cc00();
  (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x400))(1,*(undefined8 *)(lVar3 + 0xb0));
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  fVar13 = (float)(local_48._0_4_ ^ _DAT_023945e0);
  if ((float)(local_48._0_4_ ^ _DAT_023945e0) <= local_34) {
    fVar13 = local_34;
  }
  *(float *)(lVar3 + 0xe0) = fVar13;
  FUN_00d50b20();
  return;
}


