// ===== MUVoiceMapperVoiceOption — Annotated small functions =====
// 4 readable functions

// ==================================================
// @01550b90 (1809 bytes) — math_loop

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *arg1;
  longlong *this;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  float fVar26;
  ulonglong local_a0;
  longlong local_58;
  char local_50;
  
  local_a0 = (ulonglong)param_1;
  puVar17 = (undefined8 *)(ulonglong)param_2;
  iVar14 = param_2 * 8 + -4;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar4 = *(longlong *)(local_58 + 0x10);
  FUN_00e83120();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar7 = (undefined4 *)FUN_00e83010();
  if (0 < (int)param_1) {
    puVar25 = *(undefined4 **)(*arg1 + 0x10);
    lVar8 = (longlong)(int)(param_2 * 8 + -8);
    if ((int)param_2 < 3) {
      iVar15 = 2;
      uVar23 = 0;
      do {
        ___bzero();
        *puVar7 = puVar25[uVar23 * 2];
        puVar7[3] = puVar25[uVar23 * 2 + 1];
        puVar17 = (undefined8 *)(lVar4 + (longlong)iVar15 * 4);
        FUN_00e83640(lVar4,puVar17);
        fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
        if (DAT_0239109c < fVar26) {
          (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
        }
        puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
        *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + iVar14;
      } while (local_a0 != uVar23);
    }
    else {
      puVar1 = (undefined8 *)(puVar7 + 2);
      iVar15 = param_2 - 1;
      uVar23 = (ulonglong)(param_2 - 3);
      if (param_2 - 3 < 7) {
        iVar22 = 2;
        do {
          ___bzero();
          puVar21 = puVar25 + 2;
          *puVar7 = *puVar25;
          puVar7[3] = puVar25[1];
          if (iVar15 == 2) {
            puVar9 = puVar21;
            puVar17 = puVar1;
            puVar21 = puVar25 + 1;
          }
          else {
            puVar7[5] = puVar25[2];
            puVar9 = puVar25 + 3;
            puVar17 = (undefined8 *)(puVar7 + 4);
            if (iVar15 != 3) {
              puVar7[7] = puVar25[3];
              puVar9 = puVar25 + 4;
              puVar17 = (undefined8 *)(puVar7 + 6);
              puVar21 = puVar25 + 3;
              if (iVar15 != 4) {
                puVar7[9] = puVar25[4];
                puVar9 = puVar25 + 5;
                puVar17 = (undefined8 *)(puVar7 + 8);
                puVar21 = puVar25 + 4;
                if (iVar15 != 5) {
                  puVar7[0xb] = puVar25[5];
                  puVar9 = puVar25 + 6;
                  puVar17 = (undefined8 *)(puVar7 + 10);
                  puVar21 = puVar25 + 5;
                  if (iVar15 != 6) {
                    puVar7[0xd] = puVar25[6];
                    puVar9 = puVar25 + 7;
                    puVar17 = (undefined8 *)(puVar7 + 0xc);
                    puVar21 = puVar25 + 6;
                    if (iVar15 != 7) {
                      puVar7[0xf] = puVar25[7];
                      puVar9 = puVar25 + 8;
                      puVar17 = (undefined8 *)(puVar7 + 0xe);
                      puVar21 = puVar25 + 7;
                    }
                  }
                }
              }
            }
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar9;
          puVar17 = (undefined8 *)(lVar4 + (longlong)iVar22 * 4);
          FUN_00e83640(lVar4,puVar17);
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar21 + 2;
          puVar17[-1] = *(undefined8 *)((longlong)puVar17 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar17 + lVar8 * 4) = *puVar17;
          iVar22 = iVar22 + iVar14;
          local_a0 = local_a0 - 1;
        } while (local_a0 != 0);
      }
      else {
        uVar24 = uVar23 + 1 & 0xfffffffffffffff8;
        uVar18 = 0;
        do {
          ___bzero();
          *puVar7 = *puVar25;
          puVar21 = puVar25 + 1;
          if ((puVar7 + 3 < puVar25 + uVar23 + 2) && (puVar21 < puVar7 + uVar23 * 2 + 4)) {
            puVar19 = puVar1;
            uVar16 = 1;
LAB_01551120:
            uVar20 = (param_2 - 2) - uVar16;
            if ((~uVar16 + param_2 & 7) != 0) {
              cVar13 = (char)uVar16;
              lVar12 = 0;
              puVar6 = puVar19;
              do {
                puVar17 = puVar6;
                lVar11 = lVar12;
                *(undefined4 *)((longlong)puVar19 + lVar11 * 2 + 4) =
                     *(undefined4 *)((longlong)puVar21 + lVar11);
                uVar16 = uVar16 + 1;
                lVar12 = lVar11 + 4;
                puVar6 = puVar17 + 1;
              } while (((byte)(((char)param_2 + '\a') - cVar13) & 7) << 2 != (int)lVar12);
              puVar25 = (undefined4 *)((longlong)puVar21 + lVar11);
              puVar19 = puVar17 + 1;
              puVar21 = (undefined4 *)((longlong)puVar21 + lVar12);
            }
            if (6 < uVar20) {
              iVar22 = iVar15 - uVar16;
              puVar17 = puVar19 + -1;
              do {
                puVar25 = puVar21;
                *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar25;
                *(undefined4 *)((longlong)puVar17 + 0x14) = puVar25[1];
                *(undefined4 *)((longlong)puVar17 + 0x1c) = puVar25[2];
                *(undefined4 *)((longlong)puVar17 + 0x24) = puVar25[3];
                *(undefined4 *)((longlong)puVar17 + 0x2c) = puVar25[4];
                *(undefined4 *)((longlong)puVar17 + 0x34) = puVar25[5];
                *(undefined4 *)((longlong)puVar17 + 0x3c) = puVar25[6];
                *(undefined4 *)((longlong)puVar17 + 0x44) = puVar25[7];
                puVar21 = puVar25 + 8;
                puVar17 = puVar17 + 8;
                iVar22 = iVar22 + -8;
              } while (iVar22 != 0);
              puVar25 = puVar25 + 7;
            }
          }
          else {
            puVar21 = puVar21 + uVar24;
            uVar10 = 0;
            do {
              auVar2 = *(undefined1 (*) [16])(puVar25 + uVar10 + 1);
              auVar3 = *(undefined1 (*) [16])(puVar25 + uVar10 + 5);
              puVar7[uVar10 * 2 + 3] = auVar2._0_4_;
              uVar5 = extractps(auVar2,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 5) = uVar5;
              uVar5 = extractps(auVar2,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 7) = uVar5;
              uVar5 = extractps(auVar2,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 9) = uVar5;
              puVar7[uVar10 * 2 + 0xb] = auVar3._0_4_;
              uVar5 = extractps(auVar3,1);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xd) = uVar5;
              uVar5 = extractps(auVar3,2);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0xf) = uVar5;
              uVar5 = extractps(auVar3,3);
              *(undefined8 *)(puVar7 + uVar10 * 2 + 0x11) = uVar5;
              uVar10 = uVar10 + 8;
            } while (uVar24 != uVar10);
            puVar19 = puVar1 + uVar24;
            uVar16 = (int)uVar24 + 1;
            if (uVar23 + 1 != uVar24) goto LAB_01551120;
            puVar25 = puVar25 + uVar24;
            puVar17 = (undefined8 *)(puVar7 + uVar24 * 2);
          }
          *(undefined4 *)((longlong)puVar17 + 0xc) = *puVar21;
          puVar19 = (undefined8 *)(lVar4 + (longlong)(int)(iVar14 * (int)uVar18 | 2) * 4);
          puVar17 = puVar19;
          FUN_00e83640();
          fVar26 = (float)(**(code **)(DAT_02786500 + 0x10))();
          if (DAT_0239109c < fVar26) {
            (**(code **)(DAT_02786500 + 0x20))(DAT_0239109c / fVar26);
          }
          puVar25 = puVar25 + 2;
          puVar19[-1] = *(undefined8 *)((longlong)puVar19 + lVar8 * 4 + -8);
          *(undefined8 *)((longlong)puVar19 + lVar8 * 4) = *puVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 != local_a0);
      }
    }
  }
  FUN_00e83070();
  *this = local_58;
  *(undefined1 *)(this + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01553290 (1225 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *this;
  bool bVar7;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028ad180 == (undefined8 *)0x0) || (DAT_028ad189 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad180 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028ad180 == puVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028ad180 != (undefined8 *)0x0;
        DAT_028ad180 = puVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ad188 == '\0') {
        DAT_028ad188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f60;
      if (DAT_027c6f60 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0277cf70;
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f68;
      if (DAT_027c6f68 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027815c0;
      if (DAT_027815c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f70;
      if (DAT_027c6f70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02775668;
      if (DAT_02775668 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f78;
      if (DAT_027c6f78 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c7e7b0();
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = (longlong *)lVar3;
  local_38 = '\0';
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar3 = DAT_027c6f80;
    local_60 = *param_2;
    local_58 = '\0';
    if (DAT_027c6f80 != 0) {
      FUN_00d50b00();
    }
    local_40 = (longlong *)lVar3;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *this = plVar6;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    local_80 = *param_2;
    local_78 = '\0';
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00dacb30(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0154f1a0 (1134 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025ef878;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f640();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 2) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f7b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x14) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154f920();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 3) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154fa90();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x1c) = 0;
  if (DAT_027c4670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c45c0 = FUN_00d4fe50();
      _DAT_027c45a8 = "MUVoiceMapperVoiceOption";
      _DAT_027c45b0 = 0x28;
      _DAT_027c45b8 = FUN_0154f040;
      _DAT_027c45c8 = 0;
      uRam00000000027c45d0 = 0;
      _DAT_027c45d8 = 0;
      uRam00000000027c45e0 = 0;
      _DAT_027c45e8 = 0;
      uRam00000000027c45f0 = 0;
      _DAT_027c45f8 = 0;
      uRam00000000027c4600 = 0;
      _DAT_027c4608 = 0;
      uRam00000000027c4610 = 0;
      _DAT_027c4618 = 0;
      uRam00000000027c4620 = 0;
      _DAT_027c4628 = 0;
      uRam00000000027c4630 = 0;
      _DAT_027c4638 = 0;
      uRam00000000027c4640 = 0;
      _DAT_027c4648 = 0;
      uRam00000000027c4650 = 0;
      _DAT_027c4658 = 0;
      _uRam00000000027c4660 = 0;
      _DAT_027c4668 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c4663 == '\0') {
    FUN_0154fc00();
    FUN_00e87980();
  }
  FUN_0154fd70();
  return;
}




// ==================================================
// @01552cd0 (524 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *this;
  bool bVar5;
  
  plVar4 = DAT_028ad170;
  if ((DAT_028ad170 == (longlong *)0x0) || (DAT_028ad179 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad170 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (DAT_028ad170 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028ad170 != (longlong *)0x0;
        DAT_028ad170 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ad178 == '\0') {
        DAT_028ad178 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f40;
      if (DAT_027c6f40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f48;
      if (DAT_027c6f48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f50;
      if (DAT_027c6f50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f58;
      if (DAT_027c6f58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = DAT_028ad170;
    *(undefined1 *)(this + 1) = 0;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_01552ec2;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_01552ec2:
  *this = plVar4;
  *(undefined1 *)(this + 1) = 1;
  return;
}



