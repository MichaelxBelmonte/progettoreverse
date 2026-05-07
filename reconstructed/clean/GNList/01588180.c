// Function: FUN_01588180
// Address: 01588180
// Size: 2699 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_01588180(double param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  double dVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  void*local_40;
  char local_38;
  
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if ((param_1 != g_0238fee8) || (NAN(param_1) || NAN(g_0238fee8))) {
      if ((param_1 != g_0241b6a0) || (NAN(param_1) || NAN(g_0241b6a0))) {
        if ((g_027c71e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027c71d8 = '\0';
          g_027c71d9 = '\0';
          ram_00000000027c71da = 0;
          g_027c71d0._0_7_ = 0;
          g_027c71d0._7_1_ = 0;
          ___cxa_atexit(extraout_XMM0_Qa_02,0);
          ___cxa_guard_release();
        }
        if ((CONCAT17(g_027c71d0._7_1_,(undefined7)g_027c71d0) == 0) || (g_027c71d9 == '\0'))
        {
          FUN_00e8cb50();
          if (CONCAT17(g_027c71d0._7_1_,(undefined7)g_027c71d0) != 0) {
            g_027c71d9 = '\x01';
            FUN_00e8cb70();
            goto LAB_01588333;
          }
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02572358;
          (*g_02572370)();
          puVar5 = (void*)CONCAT17(g_027c71d0._7_1_,(undefined7)g_027c71d0);
          if (puVar5 == puVar4) {
            bVar1 = false;
          }
          else {
            g_027c71d0._0_7_ = SUB87(puVar4,0);
            g_027c71d0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar1 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_027c71d8 == '\0') {
            g_027c71d8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar1) {
            FUN_00d50b20();
          }
          FUN_00d21370();
          puVar5 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &g_02575d80;
          (*g_02575d98)();
          FUN_00d460b0(param_1);
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          local_38 = '\0';
          FUN_00d21140();
          g_027c71d9 = '\x01';
          FUN_00e8cb70();
          bVar1 = true;
          lVar6 = 0;
          local_40 = puVar5;
        }
        else {
LAB_01588333:
          puVar5 = (void*)0x0;
          bVar1 = false;
          lVar6 = 0;
        }
        do {
          puVar4 = *(void**)
                    (*(int64_t *)(CONCAT17(g_027c71d0._7_1_,(undefined7)g_027c71d0) + 0x10) +
                    lVar6 * 8);
          if (puVar5 == puVar4) {
            if ((!bVar1) && (puVar5 != (void*)0x0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar4 != (void*)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (puVar5 != (void*)0x0)) {
              FUN_00d50b20();
              bVar1 = true;
              puVar5 = puVar4;
            }
            else {
              bVar1 = true;
              puVar5 = puVar4;
            }
          }
          dVar7 = (double)FUN_00d45bc0();
          puVar4 = puVar5;
          bVar2 = bVar1;
          if ((dVar7 == param_1) && (!NAN(dVar7) && !NAN(param_1))) {
            *(void*)(this_ptr + 1) = 0;
            goto joined_r0x0158853f;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0xf);
        FUN_00d23620();
        uVar8 = FUN_00d470c0(param_1);
        if (local_40 == puVar5) {
          if ((!bVar1) && (local_40 != (void*)0x0)) {
            bVar2 = true;
            if (local_38 != '\0') goto LAB_01588a7c;
            uVar8 = FUN_00d50b00();
            bVar2 = true;
          }
LAB_01588a68:
          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          puVar4 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (void*)0x0) {
              uVar8 = FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (puVar5 != (void*)0x0)) {
              uVar8 = FUN_00d50b20();
            }
            goto LAB_01588a68;
          }
          bVar2 = true;
          if ((bVar1) && (puVar5 != (void*)0x0)) {
            uVar8 = FUN_00d50b20();
          }
        }
LAB_01588a7c:
        FUN_00d23370(uVar8,0);
        *(void*)(this_ptr + 1) = 0;
joined_r0x0158853f:
        if ((!bVar2) && (puVar4 != (void*)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = (int64_t)puVar4;
        goto LAB_01588519;
      }
      if ((g_027c71c8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_027c71c0 = '\0';
        g_027c71c1 = '\0';
        ram_00000000027c71c2 = 0;
        g_027c71b8._0_7_ = 0;
        g_027c71b8._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Qa_01,0);
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_027c71b8._7_1_,(undefined7)g_027c71b8);
      if ((lVar6 != 0) && (g_027c71c1 != '\0')) goto LAB_0158827d;
      FUN_00e8cb50();
      if (CONCAT17(g_027c71b8._7_1_,(undefined7)g_027c71b8) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02575d80;
        (*g_02575d98)();
        puVar5 = (void*)CONCAT17(g_027c71b8._7_1_,(undefined7)g_027c71b8);
        if (puVar5 == puVar4) {
          bVar1 = false;
        }
        else {
          g_027c71b8._0_7_ = SUB87(puVar4,0);
          g_027c71b8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
          bVar1 = true;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c71c0 == '\0') {
          g_027c71c0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(g_0241b6a0);
        g_027c71c1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c71c1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c71b8._7_1_,(undefined7)g_027c71b8);
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      if ((g_027c71b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_027c71a8 = '\0';
        g_027c71a9 = '\0';
        ram_00000000027c71aa = 0;
        g_027c71a0._0_7_ = 0;
        g_027c71a0._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Qa_00,0);
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_027c71a0._7_1_,(undefined7)g_027c71a0);
      if ((lVar6 != 0) && (g_027c71a9 != '\0')) goto LAB_0158827d;
      FUN_00e8cb50();
      if (CONCAT17(g_027c71a0._7_1_,(undefined7)g_027c71a0) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02575d80;
        (*g_02575d98)();
        puVar5 = (void*)CONCAT17(g_027c71a0._7_1_,(undefined7)g_027c71a0);
        if (puVar5 == puVar4) {
          bVar1 = false;
        }
        else {
          g_027c71a0._0_7_ = SUB87(puVar4,0);
          g_027c71a0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
          bVar1 = true;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c71a8 == '\0') {
          g_027c71a8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(g_0238fee8);
        g_027c71a9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c71a9 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c71a0._7_1_,(undefined7)g_027c71a0);
      *(void*)(this_ptr + 1) = 0;
    }
joined_r0x015886f1:
    if (lVar6 == 0) {
      *this_ptr = 0;
      goto LAB_01588519;
    }
  }
  else {
    if ((g_027c7198 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_027c7190 = '\0';
      g_027c7191 = '\0';
      ram_00000000027c7192 = 0;
      g_027c7188._0_7_ = 0;
      g_027c7188._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Qa,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_027c7188._7_1_,(undefined7)g_027c7188);
    if ((lVar6 == 0) || (g_027c7191 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_027c7188._7_1_,(undefined7)g_027c7188) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02575d80;
        (*g_02575d98)();
        puVar5 = (void*)CONCAT17(g_027c7188._7_1_,(undefined7)g_027c7188);
        if (puVar5 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          g_027c7188._0_7_ = SUB87(puVar4,0);
          g_027c7188._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
          bVar2 = true;
          bVar1 = true;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_027c7190 == '\0') {
          g_027c7190 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(0);
        g_027c7191 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_027c7191 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_027c7188._7_1_,(undefined7)g_027c7188);
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x015886f1;
    }
LAB_0158827d:
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
  *this_ptr = lVar6;
LAB_01588519:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

