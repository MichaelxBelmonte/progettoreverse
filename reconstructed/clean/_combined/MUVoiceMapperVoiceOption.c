// ===================================================================
// MUVoiceMapperVoiceOption — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (6):
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


// ============================================================
// 01553b80
// ============================================================
// Function: FUN_01553b80
// Address: 01553b80
// Size: 16108 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


int64_t * FUN_01553b80(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  int64_t lVar6;
  int unaff_ESI;
  int64_t *this_ptr;
  bool bVar7;
  byte bVar8;
  void*local_50;
  char local_48;
  
  if (unaff_ESI < 0x300) {
    switch(unaff_ESI) {
    case 0:
      if ((g_028ad1b8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad1b0 = '\0';
        g_028ad1b1 = '\0';
        ram_00000000028ad1b2 = 0;
        g_028ad1a8._0_7_ = 0;
        g_028ad1a8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad1a8._7_1_,(undefined7)g_028ad1a8);
      if ((lVar6 == 0) || (g_028ad1b1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad1a8._7_1_,(undefined7)g_028ad1a8) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad1a8._7_1_,(undefined7)g_028ad1a8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad1a8._0_7_ = SUB87(puVar4,0);
            g_028ad1a8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad1b0 == '\0') {
            g_028ad1b0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad1b1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad1b1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad1a8._7_1_,(undefined7)g_028ad1a8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 1:
      if ((g_028ad1d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad1c8 = '\0';
        g_028ad1c9 = '\0';
        ram_00000000028ad1ca = 0;
        g_028ad1c0._0_7_ = 0;
        g_028ad1c0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad1c0._7_1_,(undefined7)g_028ad1c0);
      if ((lVar6 == 0) || (g_028ad1c9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad1c0._7_1_,(undefined7)g_028ad1c0) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad1c0._7_1_,(undefined7)g_028ad1c0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad1c0._0_7_ = SUB87(puVar4,0);
            g_028ad1c0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad1c8 == '\0') {
            g_028ad1c8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad1c9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad1c9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad1c0._7_1_,(undefined7)g_028ad1c0);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 2:
      if ((g_028ad1e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad1e0 = '\0';
        g_028ad1e1 = '\0';
        ram_00000000028ad1e2 = 0;
        g_028ad1d8._0_7_ = 0;
        g_028ad1d8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad1d8._7_1_,(undefined7)g_028ad1d8);
      if ((lVar6 == 0) || (g_028ad1e1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad1d8._7_1_,(undefined7)g_028ad1d8) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad1d8._7_1_,(undefined7)g_028ad1d8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad1d8._0_7_ = SUB87(puVar4,0);
            g_028ad1d8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad1e0 == '\0') {
            g_028ad1e0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad1e1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad1e1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad1d8._7_1_,(undefined7)g_028ad1d8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 3:
      if ((g_028ad200 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad1f8 = '\0';
        g_028ad1f9 = '\0';
        ram_00000000028ad1fa = 0;
        g_028ad1f0._0_7_ = 0;
        g_028ad1f0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad1f0._7_1_,(undefined7)g_028ad1f0);
      if ((lVar6 == 0) || (g_028ad1f9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad1f0._7_1_,(undefined7)g_028ad1f0) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad1f0._7_1_,(undefined7)g_028ad1f0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad1f0._0_7_ = SUB87(puVar4,0);
            g_028ad1f0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad1f8 == '\0') {
            g_028ad1f8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad1f9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad1f9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad1f0._7_1_,(undefined7)g_028ad1f0);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 4:
      if ((g_028ad218 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad210 = '\0';
        g_028ad211 = '\0';
        ram_00000000028ad212 = 0;
        g_028ad208._0_7_ = 0;
        g_028ad208._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad208._7_1_,(undefined7)g_028ad208);
      if ((lVar6 == 0) || (g_028ad211 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad208._7_1_,(undefined7)g_028ad208) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad208._7_1_,(undefined7)g_028ad208);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad208._0_7_ = SUB87(puVar4,0);
            g_028ad208._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad210 == '\0') {
            g_028ad210 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad211 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad211 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad208._7_1_,(undefined7)g_028ad208);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 5:
      if ((g_028ad230 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad228 = '\0';
        g_028ad229 = '\0';
        ram_00000000028ad22a = 0;
        g_028ad220._0_7_ = 0;
        g_028ad220._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad220._7_1_,(undefined7)g_028ad220);
      if ((lVar6 == 0) || (g_028ad229 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad220._7_1_,(undefined7)g_028ad220) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad220._7_1_,(undefined7)g_028ad220);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad220._0_7_ = SUB87(puVar4,0);
            g_028ad220._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad228 == '\0') {
            g_028ad228 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad229 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad229 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad220._7_1_,(undefined7)g_028ad220);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 6:
      if ((g_028ad248 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad240 = '\0';
        g_028ad241 = '\0';
        ram_00000000028ad242 = 0;
        g_028ad238._0_7_ = 0;
        g_028ad238._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad238._7_1_,(undefined7)g_028ad238);
      if ((lVar6 == 0) || (g_028ad241 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad238._7_1_,(undefined7)g_028ad238) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad238._7_1_,(undefined7)g_028ad238);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad238._0_7_ = SUB87(puVar4,0);
            g_028ad238._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad240 == '\0') {
            g_028ad240 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad241 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad241 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad238._7_1_,(undefined7)g_028ad238);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 7:
      if ((g_028ad260 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad258 = '\0';
        g_028ad259 = '\0';
        ram_00000000028ad25a = 0;
        g_028ad250._0_7_ = 0;
        g_028ad250._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad250._7_1_,(undefined7)g_028ad250);
      if ((lVar6 == 0) || (g_028ad259 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad250._7_1_,(undefined7)g_028ad250) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad250._7_1_,(undefined7)g_028ad250);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad250._0_7_ = SUB87(puVar4,0);
            g_028ad250._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad258 == '\0') {
            g_028ad258 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad259 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad259 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad250._7_1_,(undefined7)g_028ad250);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 8:
      if ((g_028ad278 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad270 = '\0';
        g_028ad271 = '\0';
        ram_00000000028ad272 = 0;
        g_028ad268._0_7_ = 0;
        g_028ad268._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad268._7_1_,(undefined7)g_028ad268);
      if ((lVar6 == 0) || (g_028ad271 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad268._7_1_,(undefined7)g_028ad268) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad268._7_1_,(undefined7)g_028ad268);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad268._0_7_ = SUB87(puVar4,0);
            g_028ad268._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad270 == '\0') {
            g_028ad270 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad271 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad271 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad268._7_1_,(undefined7)g_028ad268);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    default:
      goto switchD_01553bb9_caseD_9;
    case 0xb:
      if ((g_028ad290 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad288 = '\0';
        g_028ad289 = '\0';
        ram_00000000028ad28a = 0;
        g_028ad280._0_7_ = 0;
        g_028ad280._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad280._7_1_,(undefined7)g_028ad280);
      if ((lVar6 == 0) || (g_028ad289 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad280._7_1_,(undefined7)g_028ad280) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad280._7_1_,(undefined7)g_028ad280);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad280._0_7_ = SUB87(puVar4,0);
            g_028ad280._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad288 == '\0') {
            g_028ad288 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad289 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad289 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad280._7_1_,(undefined7)g_028ad280);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0xc:
      if ((g_028ad2a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad2a0 = '\0';
        g_028ad2a1 = '\0';
        ram_00000000028ad2a2 = 0;
        g_028ad298._0_7_ = 0;
        g_028ad298._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad298._7_1_,(undefined7)g_028ad298);
      if ((lVar6 == 0) || (g_028ad2a1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad298._7_1_,(undefined7)g_028ad298) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad298._7_1_,(undefined7)g_028ad298);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad298._0_7_ = SUB87(puVar4,0);
            g_028ad298._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad2a0 == '\0') {
            g_028ad2a0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad2a1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad2a1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad298._7_1_,(undefined7)g_028ad298);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x10:
      if ((g_028ad2c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad2b8 = '\0';
        g_028ad2b9 = '\0';
        ram_00000000028ad2ba = 0;
        g_028ad2b0._0_7_ = 0;
        g_028ad2b0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad2b0._7_1_,(undefined7)g_028ad2b0);
      if ((lVar6 == 0) || (g_028ad2b9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad2b0._7_1_,(undefined7)g_028ad2b0) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad2b0._7_1_,(undefined7)g_028ad2b0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad2b0._0_7_ = SUB87(puVar4,0);
            g_028ad2b0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad2b8 == '\0') {
            g_028ad2b8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad2b9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad2b9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad2b0._7_1_,(undefined7)g_028ad2b0);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x11:
      if ((g_028ad2d8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad2d0 = '\0';
        g_028ad2d1 = '\0';
        ram_00000000028ad2d2 = 0;
        g_028ad2c8._0_7_ = 0;
        g_028ad2c8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad2c8._7_1_,(undefined7)g_028ad2c8);
      if ((lVar6 == 0) || (g_028ad2d1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad2c8._7_1_,(undefined7)g_028ad2c8) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad2c8._7_1_,(undefined7)g_028ad2c8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad2c8._0_7_ = SUB87(puVar4,0);
            g_028ad2c8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad2d0 == '\0') {
            g_028ad2d0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad2d1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad2d1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad2c8._7_1_,(undefined7)g_028ad2c8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x12:
      if ((g_028ad2f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad2e8 = '\0';
        g_028ad2e9 = '\0';
        ram_00000000028ad2ea = 0;
        g_028ad2e0._0_7_ = 0;
        g_028ad2e0._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad2e0._7_1_,(undefined7)g_028ad2e0);
      if ((lVar6 == 0) || (g_028ad2e9 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad2e0._7_1_,(undefined7)g_028ad2e0) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad2e0._7_1_,(undefined7)g_028ad2e0);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad2e0._0_7_ = SUB87(puVar4,0);
            g_028ad2e0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad2e8 == '\0') {
            g_028ad2e8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad2e9 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad2e9 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad2e0._7_1_,(undefined7)g_028ad2e0);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x13:
      if ((g_028ad308 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad300 = '\0';
        g_028ad301 = '\0';
        ram_00000000028ad302 = 0;
        g_028ad2f8._0_7_ = 0;
        g_028ad2f8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad2f8._7_1_,(undefined7)g_028ad2f8);
      if ((lVar6 == 0) || (g_028ad301 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad2f8._7_1_,(undefined7)g_028ad2f8) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad2f8._7_1_,(undefined7)g_028ad2f8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad2f8._0_7_ = SUB87(puVar4,0);
            g_028ad2f8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad300 == '\0') {
            g_028ad300 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad301 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad301 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad2f8._7_1_,(undefined7)g_028ad2f8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x40:
      if ((g_028ad320 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad318 = '\0';
        g_028ad319 = '\0';
        ram_00000000028ad31a = 0;
        g_028ad310._0_7_ = 0;
        g_028ad310._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad310._7_1_,(undefined7)g_028ad310);
      if ((lVar6 == 0) || (g_028ad319 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad310._7_1_,(undefined7)g_028ad310) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad310._7_1_,(undefined7)g_028ad310);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad310._0_7_ = SUB87(puVar4,0);
            g_028ad310._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad318 == '\0') {
            g_028ad318 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad319 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad319 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad310._7_1_,(undefined7)g_028ad310);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x42:
      if ((g_028ad338 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad330 = '\0';
        g_028ad331 = '\0';
        ram_00000000028ad332 = 0;
        g_028ad328._0_7_ = 0;
        g_028ad328._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad328._7_1_,(undefined7)g_028ad328);
      if ((lVar6 == 0) || (g_028ad331 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad328._7_1_,(undefined7)g_028ad328) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad328._7_1_,(undefined7)g_028ad328);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad328._0_7_ = SUB87(puVar4,0);
            g_028ad328._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad330 == '\0') {
            g_028ad330 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad331 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad331 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad328._7_1_,(undefined7)g_028ad328);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x50:
      if ((g_028ad350 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad348 = '\0';
        g_028ad349 = '\0';
        ram_00000000028ad34a = 0;
        g_028ad340._0_7_ = 0;
        g_028ad340._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad340._7_1_,(undefined7)g_028ad340);
      if ((lVar6 == 0) || (g_028ad349 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad340._7_1_,(undefined7)g_028ad340) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad340._7_1_,(undefined7)g_028ad340);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad340._0_7_ = SUB87(puVar4,0);
            g_028ad340._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad348 == '\0') {
            g_028ad348 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad349 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad340._7_1_,(undefined7)g_028ad340);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x52:
      if ((g_028ad368 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad360 = '\0';
        g_028ad361 = '\0';
        ram_00000000028ad362 = 0;
        g_028ad358._0_7_ = 0;
        g_028ad358._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad358._7_1_,(undefined7)g_028ad358);
      if ((lVar6 == 0) || (g_028ad361 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad358._7_1_,(undefined7)g_028ad358) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad358._7_1_,(undefined7)g_028ad358);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad358._0_7_ = SUB87(puVar4,0);
            g_028ad358._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad360 == '\0') {
            g_028ad360 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad361 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad361 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad358._7_1_,(undefined7)g_028ad358);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case 0x62:
      if ((g_028ad380 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad378 = '\0';
        g_028ad379 = '\0';
        ram_00000000028ad37a = 0;
        g_028ad370._0_7_ = 0;
        g_028ad370._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad370._7_1_,(undefined7)g_028ad370);
      if ((lVar6 == 0) || (g_028ad379 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad370._7_1_,(undefined7)g_028ad370) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad370._7_1_,(undefined7)g_028ad370);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad370._0_7_ = SUB87(puVar4,0);
            g_028ad370._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad378 == '\0') {
            g_028ad378 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad379 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad379 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad370._7_1_,(undefined7)g_028ad370);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
      break;
    case -1:
      if ((g_028ad1a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad198 = '\0';
        g_028ad199 = '\0';
        ram_00000000028ad19a = 0;
        g_028ad190._0_7_ = 0;
        g_028ad190._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad190._7_1_,(undefined7)g_028ad190);
      if ((lVar6 == 0) || (g_028ad199 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad190._7_1_,(undefined7)g_028ad190) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad190._7_1_,(undefined7)g_028ad190);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad190._0_7_ = SUB87(puVar4,0);
            g_028ad190._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad198 == '\0') {
            g_028ad198 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad199 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad199 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad190._7_1_,(undefined7)g_028ad190);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) {
LAB_015569e4:
          lVar6 = 0;
          break;
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI < 0x1800) {
    if (unaff_ESI < 0xf00) {
      if (unaff_ESI < 0x900) {
        if (unaff_ESI == 0x300) {
          if ((g_028ad398 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_028ad390 = '\0';
            g_028ad391 = '\0';
            ram_00000000028ad392 = 0;
            g_028ad388._0_7_ = 0;
            g_028ad388._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(g_028ad388._7_1_,(undefined7)g_028ad388);
          if ((lVar6 == 0) || (g_028ad391 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(g_028ad388._7_1_,(undefined7)g_028ad388) == 0) {
              puVar4 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &g_02575d80;
              (*g_02575d98)();
              puVar5 = (void*)CONCAT17(g_028ad388._7_1_,(undefined7)g_028ad388);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                g_028ad388._0_7_ = SUB87(puVar4,0);
                g_028ad388._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (g_028ad390 == '\0') {
                g_028ad390 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              g_028ad391 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad391 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(g_028ad388._7_1_,(undefined7)g_028ad388);
            *(void*)(this_ptr + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(void*)(this_ptr + 1) = 0;
          }
          FUN_00d50b00();
        }
        else {
          if (unaff_ESI != 0x600) goto switchD_01553bb9_caseD_9;
          if ((g_028ad3b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_028ad3a8 = '\0';
            g_028ad3a9 = '\0';
            ram_00000000028ad3aa = 0;
            g_028ad3a0._0_7_ = 0;
            g_028ad3a0._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(g_028ad3a0._7_1_,(undefined7)g_028ad3a0);
          if ((lVar6 == 0) || (g_028ad3a9 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(g_028ad3a0._7_1_,(undefined7)g_028ad3a0) == 0) {
              puVar4 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &g_02575d80;
              (*g_02575d98)();
              puVar5 = (void*)CONCAT17(g_028ad3a0._7_1_,(undefined7)g_028ad3a0);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                g_028ad3a0._0_7_ = SUB87(puVar4,0);
                g_028ad3a0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (g_028ad3a8 == '\0') {
                g_028ad3a8 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              g_028ad3a9 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad3a9 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(g_028ad3a0._7_1_,(undefined7)g_028ad3a0);
            *(void*)(this_ptr + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(void*)(this_ptr + 1) = 0;
          }
          FUN_00d50b00();
        }
      }
      else if (unaff_ESI == 0x900) {
        if ((g_028ad3c8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad3c0 = '\0';
          g_028ad3c1 = '\0';
          ram_00000000028ad3c2 = 0;
          g_028ad3b8._0_7_ = 0;
          g_028ad3b8._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad3b8._7_1_,(undefined7)g_028ad3b8);
        if ((lVar6 == 0) || (g_028ad3c1 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad3b8._7_1_,(undefined7)g_028ad3b8) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad3b8._7_1_,(undefined7)g_028ad3b8);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad3b8._0_7_ = SUB87(puVar4,0);
              g_028ad3b8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad3c0 == '\0') {
              g_028ad3c0 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad3c1 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad3c1 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad3b8._7_1_,(undefined7)g_028ad3b8);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0xc00) goto switchD_01553bb9_caseD_9;
        if ((g_028ad3e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad3d8 = '\0';
          g_028ad3d9 = '\0';
          ram_00000000028ad3da = 0;
          g_028ad3d0._0_7_ = 0;
          g_028ad3d0._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad3d0._7_1_,(undefined7)g_028ad3d0);
        if ((lVar6 == 0) || (g_028ad3d9 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad3d0._7_1_,(undefined7)g_028ad3d0) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad3d0._7_1_,(undefined7)g_028ad3d0);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad3d0._0_7_ = SUB87(puVar4,0);
              g_028ad3d0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad3d8 == '\0') {
              g_028ad3d8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad3d9 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad3d9 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad3d0._7_1_,(undefined7)g_028ad3d0);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
    else {
      if (0x11ff < unaff_ESI) {
        if (unaff_ESI == 0x1200) {
          if ((g_028ad410 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_028ad408 = '\0';
            g_028ad409 = '\0';
            ram_00000000028ad40a = 0;
            g_028ad400._0_7_ = 0;
            g_028ad400._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(g_028ad400._7_1_,(undefined7)g_028ad400);
          if ((lVar6 == 0) || (g_028ad409 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(g_028ad400._7_1_,(undefined7)g_028ad400) == 0) {
              puVar4 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &g_02575d80;
              (*g_02575d98)();
              puVar5 = (void*)CONCAT17(g_028ad400._7_1_,(undefined7)g_028ad400);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                g_028ad400._0_7_ = SUB87(puVar4,0);
                g_028ad400._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (g_028ad408 == '\0') {
                g_028ad408 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              g_028ad409 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad409 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(g_028ad400._7_1_,(undefined7)g_028ad400);
            *(void*)(this_ptr + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(void*)(this_ptr + 1) = 0;
          }
          FUN_00d50b00();
          goto LAB_015569e6;
        }
        if (unaff_ESI == 0x1500) {
          if ((g_028ad428 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_028ad420 = '\0';
            g_028ad421 = '\0';
            ram_00000000028ad422 = 0;
            g_028ad418._0_7_ = 0;
            g_028ad418._7_1_ = 0;
            ___cxa_atexit();
            ___cxa_guard_release();
          }
          lVar6 = CONCAT17(g_028ad418._7_1_,(undefined7)g_028ad418);
          if ((lVar6 == 0) || (g_028ad421 == '\0')) {
            FUN_00e8cb50();
            if (CONCAT17(g_028ad418._7_1_,(undefined7)g_028ad418) == 0) {
              puVar4 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar4 = &g_02575d80;
              (*g_02575d98)();
              puVar5 = (void*)CONCAT17(g_028ad418._7_1_,(undefined7)g_028ad418);
              if (puVar5 == puVar4) {
                bVar2 = false;
              }
              else {
                g_028ad418._0_7_ = SUB87(puVar4,0);
                g_028ad418._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
                bVar2 = true;
                if (puVar5 != (void*)0x0) {
                  FUN_00d50b20();
                }
              }
              if (g_028ad420 == '\0') {
                g_028ad420 = '\x01';
                FUN_00e8cb90();
              }
              if (!bVar2) {
                FUN_00d50b20();
              }
              FUN_00d46080();
              g_028ad421 = '\x01';
              FUN_00e8cb70();
            }
            else {
              g_028ad421 = '\x01';
              FUN_00e8cb70();
            }
            lVar6 = CONCAT17(g_028ad418._7_1_,(undefined7)g_028ad418);
            *(void*)(this_ptr + 1) = 0;
            if (lVar6 == 0) goto LAB_015569e4;
          }
          else {
            *(void*)(this_ptr + 1) = 0;
          }
          FUN_00d50b00();
          goto LAB_015569e6;
        }
switchD_01553bb9_caseD_9:
        if ((g_028ad518 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad510 = '\0';
          g_028ad511 = '\0';
          ram_00000000028ad512 = 0;
          g_028ad508._0_7_ = 0;
          g_028ad508._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        bVar1 = 1;
        if ((CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) == 0) || (g_028ad511 == '\0'))
        {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) != 0) {
            g_028ad511 = '\x01';
            FUN_00e8cb70();
            goto LAB_015545ba;
          }
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02572358;
          (*g_02572370)();
          puVar5 = (void*)CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad508._0_7_ = SUB87(puVar4,0);
            g_028ad508._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad510 == '\0') {
            g_028ad510 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d21370();
          puVar5 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &g_02575d80;
          (*g_02575d98)();
          FUN_00d46080();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          local_48 = '\0';
          FUN_00d21140();
          g_028ad511 = '\x01';
          FUN_00e8cb70();
          bVar8 = 1;
          bVar1 = 0;
          bVar2 = true;
          local_50 = puVar5;
        }
        else {
LAB_015545ba:
          bVar8 = 0;
          bVar2 = false;
          puVar5 = (void*)0x0;
        }
        puVar4 = (void*)
                 **(void**)(CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) + 0x10);
        if (puVar5 == puVar4) {
          puVar4 = puVar5;
          if ((bool)(bVar1 & puVar5 != (void*)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar4 != (void*)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bool)(bVar8 & puVar5 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar3 = FUN_00d45870();
        puVar5 = puVar4;
        if (iVar3 == unaff_ESI) {
LAB_01556cb7:
          *(void*)(this_ptr + 1) = 0;
          if (!bVar2) {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
LAB_01556cde:
            *this_ptr = (int64_t)puVar5;
            goto LAB_015569ed;
          }
        }
        else {
          puVar5 = *(void**)
                    (*(int64_t *)(CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) + 0x10) + 8
                    );
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (void*)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (void*)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(void**)
                    (*(int64_t *)(CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) + 0x10) +
                    0x10);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (void*)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (void*)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(void**)
                    (*(int64_t *)(CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) + 0x10) +
                    0x18);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (void*)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (void*)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          puVar5 = *(void**)
                    (*(int64_t *)(CONCAT17(g_028ad508._7_1_,(undefined7)g_028ad508) + 0x10) +
                    0x20);
          if (puVar4 == puVar5) {
            if ((!bVar2) && (puVar4 != (void*)0x0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (puVar4 != (void*)0x0)) {
              FUN_00d50b20();
              bVar2 = true;
              puVar4 = puVar5;
            }
            else {
              bVar2 = true;
              puVar4 = puVar5;
            }
          }
          iVar3 = FUN_00d45870();
          puVar5 = puVar4;
          if (iVar3 == unaff_ESI) goto LAB_01556cb7;
          FUN_00d23620();
          FUN_00d46530();
          if (local_50 == puVar4) {
            bVar7 = bVar2;
            if ((!bVar2) && (local_50 != (void*)0x0)) {
              bVar7 = true;
              if (local_48 != '\0') goto LAB_01556d9b;
              FUN_00d50b00();
              bVar7 = true;
            }
LAB_01556d87:
            if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            puVar5 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              bVar7 = true;
              if ((bVar2) && (puVar4 != (void*)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01556d87;
            }
            bVar7 = true;
            if ((bVar2) && (puVar4 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01556d9b:
          FUN_00d23370();
          *(void*)(this_ptr + 1) = 0;
          if (!bVar7) {
            if (puVar5 != (void*)0x0) {
              FUN_00d50b00();
            }
            goto LAB_01556cde;
          }
        }
        *this_ptr = (int64_t)puVar5;
        goto LAB_015569ed;
      }
      if (unaff_ESI == 0xf00) {
        if ((g_028ad3f8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad3f0 = '\0';
          g_028ad3f1 = '\0';
          ram_00000000028ad3f2 = 0;
          g_028ad3e8._0_7_ = 0;
          g_028ad3e8._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad3e8._7_1_,(undefined7)g_028ad3e8);
        if ((lVar6 == 0) || (g_028ad3f1 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad3e8._7_1_,(undefined7)g_028ad3e8) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad3e8._7_1_,(undefined7)g_028ad3e8);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad3e8._0_7_ = SUB87(puVar4,0);
              g_028ad3e8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad3f0 == '\0') {
              g_028ad3f0 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad3f1 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad3f1 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad3e8._7_1_,(undefined7)g_028ad3e8);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0x1000) goto switchD_01553bb9_caseD_9;
        if ((g_028ad500 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad4f8 = '\0';
          g_028ad4f9 = '\0';
          ram_00000000028ad4fa = 0;
          g_028ad4f0._0_7_ = 0;
          g_028ad4f0._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad4f0._7_1_,(undefined7)g_028ad4f0);
        if ((lVar6 == 0) || (g_028ad4f9 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad4f0._7_1_,(undefined7)g_028ad4f0) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad4f0._7_1_,(undefined7)g_028ad4f0);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad4f0._0_7_ = SUB87(puVar4,0);
              g_028ad4f0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad4f8 == '\0') {
              g_028ad4f8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad4f9 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad4f9 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad4f0._7_1_,(undefined7)g_028ad4f0);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
  }
  else if (unaff_ESI < 0x2400) {
    if (unaff_ESI < 0x1e00) {
      if (unaff_ESI == 0x1800) {
        if ((g_028ad440 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad438 = '\0';
          g_028ad439 = '\0';
          ram_00000000028ad43a = 0;
          g_028ad430._0_7_ = 0;
          g_028ad430._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad430._7_1_,(undefined7)g_028ad430);
        if ((lVar6 == 0) || (g_028ad439 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad430._7_1_,(undefined7)g_028ad430) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad430._7_1_,(undefined7)g_028ad430);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad430._0_7_ = SUB87(puVar4,0);
              g_028ad430._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad438 == '\0') {
              g_028ad438 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad439 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad439 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad430._7_1_,(undefined7)g_028ad430);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
      else {
        if (unaff_ESI != 0x1b00) goto switchD_01553bb9_caseD_9;
        if ((g_028ad458 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_028ad450 = '\0';
          g_028ad451 = '\0';
          ram_00000000028ad452 = 0;
          g_028ad448._0_7_ = 0;
          g_028ad448._7_1_ = 0;
          ___cxa_atexit();
          ___cxa_guard_release();
        }
        lVar6 = CONCAT17(g_028ad448._7_1_,(undefined7)g_028ad448);
        if ((lVar6 == 0) || (g_028ad451 == '\0')) {
          FUN_00e8cb50();
          if (CONCAT17(g_028ad448._7_1_,(undefined7)g_028ad448) == 0) {
            puVar4 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar4 = &g_02575d80;
            (*g_02575d98)();
            puVar5 = (void*)CONCAT17(g_028ad448._7_1_,(undefined7)g_028ad448);
            if (puVar5 == puVar4) {
              bVar2 = false;
            }
            else {
              g_028ad448._0_7_ = SUB87(puVar4,0);
              g_028ad448._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
              bVar2 = true;
              if (puVar5 != (void*)0x0) {
                FUN_00d50b20();
              }
            }
            if (g_028ad450 == '\0') {
              g_028ad450 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
            FUN_00d46080();
            g_028ad451 = '\x01';
            FUN_00e8cb70();
          }
          else {
            g_028ad451 = '\x01';
            FUN_00e8cb70();
          }
          lVar6 = CONCAT17(g_028ad448._7_1_,(undefined7)g_028ad448);
          *(void*)(this_ptr + 1) = 0;
          if (lVar6 == 0) goto LAB_015569e4;
        }
        else {
          *(void*)(this_ptr + 1) = 0;
        }
        FUN_00d50b00();
      }
    }
    else if (unaff_ESI == 0x1e00) {
      if ((g_028ad470 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad468 = '\0';
        g_028ad469 = '\0';
        ram_00000000028ad46a = 0;
        g_028ad460._0_7_ = 0;
        g_028ad460._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad460._7_1_,(undefined7)g_028ad460);
      if ((lVar6 == 0) || (g_028ad469 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad460._7_1_,(undefined7)g_028ad460) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad460._7_1_,(undefined7)g_028ad460);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad460._0_7_ = SUB87(puVar4,0);
            g_028ad460._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad468 == '\0') {
            g_028ad468 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad469 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad469 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad460._7_1_,(undefined7)g_028ad460);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
    }
    else {
      if (unaff_ESI != 0x2100) goto switchD_01553bb9_caseD_9;
      if ((g_028ad488 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad480 = '\0';
        g_028ad481 = '\0';
        ram_00000000028ad482 = 0;
        g_028ad478._0_7_ = 0;
        g_028ad478._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad478._7_1_,(undefined7)g_028ad478);
      if ((lVar6 == 0) || (g_028ad481 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad478._7_1_,(undefined7)g_028ad478) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad478._7_1_,(undefined7)g_028ad478);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad478._0_7_ = SUB87(puVar4,0);
            g_028ad478._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad480 == '\0') {
            g_028ad480 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad481 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad481 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad478._7_1_,(undefined7)g_028ad478);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI < 0x2a00) {
    if (unaff_ESI == 0x2400) {
      if ((g_028ad4a0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad498 = '\0';
        g_028ad499 = '\0';
        ram_00000000028ad49a = 0;
        g_028ad490._0_7_ = 0;
        g_028ad490._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad490._7_1_,(undefined7)g_028ad490);
      if ((lVar6 == 0) || (g_028ad499 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad490._7_1_,(undefined7)g_028ad490) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad490._7_1_,(undefined7)g_028ad490);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad490._0_7_ = SUB87(puVar4,0);
            g_028ad490._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad498 == '\0') {
            g_028ad498 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad499 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad499 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad490._7_1_,(undefined7)g_028ad490);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
    }
    else {
      if (unaff_ESI != 0x2700) goto switchD_01553bb9_caseD_9;
      if ((g_028ad4b8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_028ad4b0 = '\0';
        g_028ad4b1 = '\0';
        ram_00000000028ad4b2 = 0;
        g_028ad4a8._0_7_ = 0;
        g_028ad4a8._7_1_ = 0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(g_028ad4a8._7_1_,(undefined7)g_028ad4a8);
      if ((lVar6 == 0) || (g_028ad4b1 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028ad4a8._7_1_,(undefined7)g_028ad4a8) == 0) {
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_02575d80;
          (*g_02575d98)();
          puVar5 = (void*)CONCAT17(g_028ad4a8._7_1_,(undefined7)g_028ad4a8);
          if (puVar5 == puVar4) {
            bVar2 = false;
          }
          else {
            g_028ad4a8._0_7_ = SUB87(puVar4,0);
            g_028ad4a8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
            bVar2 = true;
            if (puVar5 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          if (g_028ad4b0 == '\0') {
            g_028ad4b0 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d46080();
          g_028ad4b1 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028ad4b1 = '\x01';
          FUN_00e8cb70();
        }
        lVar6 = CONCAT17(g_028ad4a8._7_1_,(undefined7)g_028ad4a8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar6 == 0) goto LAB_015569e4;
      }
      else {
        *(void*)(this_ptr + 1) = 0;
      }
      FUN_00d50b00();
    }
  }
  else if (unaff_ESI == 0x2a00) {
    if ((g_028ad4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_028ad4c8 = '\0';
      g_028ad4c9 = '\0';
      ram_00000000028ad4ca = 0;
      g_028ad4c0._0_7_ = 0;
      g_028ad4c0._7_1_ = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_028ad4c0._7_1_,(undefined7)g_028ad4c0);
    if ((lVar6 == 0) || (g_028ad4c9 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_028ad4c0._7_1_,(undefined7)g_028ad4c0) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02575d80;
        (*g_02575d98)();
        puVar5 = (void*)CONCAT17(g_028ad4c0._7_1_,(undefined7)g_028ad4c0);
        if (puVar5 == puVar4) {
          bVar2 = false;
        }
        else {
          g_028ad4c0._0_7_ = SUB87(puVar4,0);
          g_028ad4c0._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
          bVar2 = true;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_028ad4c8 == '\0') {
          g_028ad4c8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d46080();
        g_028ad4c9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028ad4c9 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_028ad4c0._7_1_,(undefined7)g_028ad4c0);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015569e4;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
  else {
    if (unaff_ESI != 0x2d00) goto switchD_01553bb9_caseD_9;
    if ((g_028ad4e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_028ad4e0 = '\0';
      g_028ad4e1 = '\0';
      ram_00000000028ad4e2 = 0;
      g_028ad4d8._0_7_ = 0;
      g_028ad4d8._7_1_ = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(g_028ad4d8._7_1_,(undefined7)g_028ad4d8);
    if ((lVar6 == 0) || (g_028ad4e1 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(g_028ad4d8._7_1_,(undefined7)g_028ad4d8) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02575d80;
        (*g_02575d98)();
        puVar5 = (void*)CONCAT17(g_028ad4d8._7_1_,(undefined7)g_028ad4d8);
        if (puVar5 == puVar4) {
          bVar2 = false;
        }
        else {
          g_028ad4d8._0_7_ = SUB87(puVar4,0);
          g_028ad4d8._7_1_ = (uint8_t)((uint64_t)puVar4 >> 0x38);
          bVar2 = true;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_028ad4e0 == '\0') {
          g_028ad4e0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d46080();
        g_028ad4e1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028ad4e1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(g_028ad4d8._7_1_,(undefined7)g_028ad4d8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar6 == 0) goto LAB_015569e4;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_015569e6:
  *this_ptr = lVar6;
LAB_015569ed:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 015513a0
// ============================================================
// Function: FUN_015513a0
// Address: 015513a0
// Size: 5531 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_015513a0(void *param_1,uint64_t param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  void *pvVar21;
  int64_t lVar22;
  int64_t lVar23;
  void* pVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  void* pVar28;
  int64_t *this_ptr;
  uint64_t uVar29;
  int64_t lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  double dVar40;
  double dVar41;
  int64_t lVar42;
  double dVar43;
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  double local_8e0;
  int64_t local_8b8;
  int local_8a8;
  int64_t *local_890;
  char local_888;
  double local_878;
  float local_868;
  double local_860;
  int local_850;
  int64_t *local_848;
  int64_t local_838 [12];
  int64_t alStack_7d8 [244];
  int64_t local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  uVar20 = (uint64_t)param_1 & 0xffffffff;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pvVar21 = param_1;
  uVar10 = FUN_00b33120();
  uVar29 = (uint64_t)uVar10;
  if (0 < (int)uVar10) {
    _memcpy(pvVar21,(void *)(uVar29 * 8),param_3);
  }
  dVar34 = (double)FUN_00b335d0();
  uVar13 = (uint)param_1;
  uVar11 = (int)(g_0240f0b8 * dVar34);
  if ((int)uVar13 < (int)(g_0240f0b8 * dVar34)) {
    uVar11 = uVar13;
  }
  local_860 = (double)(**(code **)(*this_ptr + 0x5e0))();
  dVar35 = (double)(**(code **)(*this_ptr + 0x5f0))();
  if ((*(char *)((int64_t)this_ptr + 0x25e) != '\0') && ((char)this_ptr[0x4c] == '\0')) {
    dVar40 = g_02391030 * dVar34;
    lVar30 = this_ptr[0x23];
    *(float *)(lVar30 + 0x10) =
         (float)(*(uint *)(lVar30 + 0xc) ^ g_023945e0) / (float)(int)dVar40;
    *(int *)(lVar30 + 0x14) = (int)dVar40;
    *(void*)(this_ptr + 0x4c) = 1;
  }
  if (uVar13 != 0) {
    dVar43 = dVar35 - local_860;
    uVar12 = (uint)(g_02391030 * dVar34);
    dVar40 = (g_0238fee8 / (double)(int)uVar13) * dVar43;
    fVar31 = (float)(int)(g_02391030 * dVar34);
    uVar14 = (uint64_t)(uVar10 & 0xfffffffc);
    uVar15 = (uVar14 - 4 >> 2) + 1;
    uVar25 = (uint64_t)((uint)uVar15 & 3);
    uVar26 = uVar25 << 5;
    bVar9 = true;
    local_8a8 = 0x80;
    local_8b8 = 0;
    lVar30 = 0;
    bVar6 = false;
    local_848 = (int64_t *)0x0;
    bVar7 = false;
    local_878 = 0.0;
    local_8e0 = 0.0;
    uVar27 = uVar26;
    local_868 = g_023b26e8;
    do {
      pVar24 = (void*)uVar27;
      local_850 = (int)uVar20;
      if (bVar9) {
        lVar23 = this_ptr[0x1d];
        lVar22 = lVar23;
        if (lVar23 == 0) {
          if (*(char *)((int64_t)this_ptr + 0x25e) != '\0') {
            (**(code **)(*this_ptr + 0x678))();
            break;
          }
          lVar22 = this_ptr[99];
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            if (*(int64_t *)(lVar22 + 0x50) != 0) goto LAB_01551693;
LAB_015516d5:
            (**(code **)(*this_ptr + 0x678))();
LAB_015516e4:
            bVar4 = false;
          }
          else {
            if (*(int64_t *)
                 (*(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8) +
                 0x50) == 0) goto LAB_015516d5;
LAB_01551693:
            pvVar21 = _pthread_getspecific(pVar24);
            if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
              lVar16 = *(int64_t *)(lVar22 + 0x48);
            }
            else {
              lVar16 = *(int64_t *)
                        (*(int64_t *)
                          (lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x48);
            }
            if (lVar16 == 0) goto LAB_015516d5;
            if (0.0 <= dVar43) {
              pvVar21 = _pthread_getspecific(pVar24);
              lVar16 = lVar22;
              if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                lVar16 = *(int64_t *)
                          (lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8);
              }
              lVar17 = *(int64_t *)(lVar16 + 0x48);
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                lVar17 = *(int64_t *)(lVar16 + 0x48);
                lVar16 = FUN_00e8b990();
                if (lVar16 != 0) {
                  lVar17 = *(int64_t *)
                            (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
                }
              }
              dVar36 = *(double *)(lVar17 + 0xe8) - local_860;
              uVar13 = 0;
              if (dVar36 <= g_02390448) {
LAB_01551ea8:
                if (dVar36 < g_0241b698) {
LAB_01551eb6:
                  *(void*)((int64_t)this_ptr + 0x25f) = 1;
                }
                goto LAB_01551ebe;
              }
              if (*(double *)(lVar17 + 0xe8) < dVar35) {
                if ((dVar40 != g_02390448) || (NAN(dVar40) || NAN(g_02390448))) {
                  uVar13 = (uint)(dVar36 / dVar40 + g_023942d0);
                  goto LAB_01551ea8;
                }
              }
              goto LAB_015516e4;
            }
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(int64_t *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(int64_t *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(int64_t *)
                          (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = *(double *)(lVar17 + 0xe8);
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(int64_t *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(int64_t *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(int64_t *)
                          (lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = dVar36 + *(double *)(lVar17 + 0xf0);
            dVar41 = dVar36 - local_860;
            uVar13 = 0;
            if (dVar41 < 0.0) {
              if (dVar35 < dVar36) {
                if ((dVar40 != g_02390448) || (NAN(dVar40) || NAN(g_02390448))) {
                  uVar13 = (uint)(dVar41 / dVar40 + g_023942d0);
                  goto LAB_01551fa8;
                }
              }
              goto LAB_015516e4;
            }
LAB_01551fa8:
            if (g_02391038 < dVar41) goto LAB_01551eb6;
LAB_01551ebe:
            if (0 < (int)uVar13) {
              if (local_850 - uVar13 == 0 || local_850 < (int)uVar13) goto LAB_015516e4;
              if (0 < (int)uVar10) {
                pVar24 = uVar13;
                if (uVar10 < 4) {
                  uVar20 = 0;
                }
                else {
                  if (uVar14 - 4 < 0xc) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = 0;
                    lVar17 = -(uVar15 & 0xfffffffffffffffc);
                    do {
                      lVar18 = (uint64_t)uVar13 * 4;
                      lVar42 = (uint64_t)uVar13 * 4;
                      local_838[lVar16] = local_838[lVar16] + lVar18;
                      local_838[lVar16 + 1] = local_838[lVar16 + 1] + lVar42;
                      local_838[lVar16 + 2] = local_838[lVar16 + 2] + lVar18;
                      local_838[lVar16 + 3] = local_838[lVar16 + 3] + lVar42;
                      local_838[lVar16 + 4] = local_838[lVar16 + 4] + lVar18;
                      local_838[lVar16 + 5] = local_838[lVar16 + 5] + lVar42;
                      local_838[lVar16 + 6] = local_838[lVar16 + 6] + lVar18;
                      local_838[lVar16 + 7] = local_838[lVar16 + 7] + lVar42;
                      local_838[lVar16 + 8] = local_838[lVar16 + 8] + lVar18;
                      local_838[lVar16 + 9] = local_838[lVar16 + 9] + lVar42;
                      local_838[lVar16 + 10] = local_838[lVar16 + 10] + lVar18;
                      local_838[lVar16 + 0xb] = local_838[lVar16 + 0xb] + lVar42;
                      auVar44._0_8_ = alStack_7d8[lVar16] + lVar18;
                      auVar44._8_8_ = alStack_7d8[lVar16 + 1] + lVar42;
                      *(uint8_t (*) [16])(alStack_7d8 + lVar16) = auVar44;
                      alStack_7d8[lVar16 + 2] = lVar18 + alStack_7d8[lVar16 + 2];
                      alStack_7d8[lVar16 + 3] = lVar42 + alStack_7d8[lVar16 + 3];
                      lVar16 = lVar16 + 0x10;
                      lVar17 = lVar17 + 4;
                    } while (lVar17 != 0);
                  }
                  if (uVar25 != 0) {
                    lVar16 = lVar16 * 8;
                    uVar20 = 0;
                    do {
                      plVar19 = (int64_t *)((int64_t)local_838 + uVar20 + lVar16);
                      auVar45._0_8_ = *plVar19 + (uint64_t)uVar13 * 4;
                      auVar45._8_8_ = plVar19[1] + (uint64_t)uVar13 * 4;
                      plVar19 = (int64_t *)((int64_t)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      lVar17 = *plVar19;
                      lVar18 = plVar19[1];
                      *(uint8_t (*) [16])((int64_t)local_838 + uVar20 + lVar16) = auVar45;
                      plVar19 = (int64_t *)((int64_t)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      *plVar19 = (uint64_t)uVar13 * 4 + lVar17;
                      plVar19[1] = (uint64_t)uVar13 * 4 + lVar18;
                      uVar20 = uVar20 + 0x20;
                    } while (uVar26 != uVar20);
                  }
                  uVar20 = uVar14;
                  if (uVar14 == uVar29) goto LAB_01552739;
                }
                do {
                  local_838[uVar20] = local_838[uVar20] + (uint64_t)uVar13 * 4;
                  uVar20 = uVar20 + 1;
                } while (uVar29 != uVar20);
              }
LAB_01552739:
              local_860 = local_860 + (double)(int)uVar13 * dVar40;
              local_850 = local_850 - uVar13;
            }
            this_ptr[100] = 0;
            *(void*)(this_ptr[0x23] + 0x18) = 0xffffffff;
            lVar16 = this_ptr[0x1d];
            bVar4 = true;
            if (lVar16 != lVar22) {
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              this_ptr[0x1d] = lVar22;
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
          if (!bVar4) {
            if (!bVar7) goto LAB_01552914;
            goto LAB_0155290a;
          }
          lVar22 = this_ptr[0x1d];
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = this_ptr[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(int64_t *)(lVar22 + 0x48);
        if (lVar22 == lVar30) {
          lVar16 = lVar30;
          bVar4 = bVar6;
          if ((!bVar6) && (lVar22 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar16 = lVar22;
          if ((bVar6) && (lVar30 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar4;
        lVar30 = lVar16;
        lVar22 = this_ptr[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = this_ptr[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        if ((*(int64_t *)(lVar22 + 0x50) == 0) || (lVar30 == 0)) {
          (**(code **)(*this_ptr + 0x678))();
          break;
        }
        lVar22 = this_ptr[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = this_ptr[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(int64_t *)(lVar22 + 0x50);
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          if (*(int64_t *)(lVar22 + 0x40) != 0) goto LAB_0155188e;
LAB_01551950:
          (**(code **)(*this_ptr + 0x678))();
          bVar5 = false;
          bVar4 = false;
        }
        else {
          if (*(int64_t *)
               (*(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x40
               ) == 0) goto LAB_01551950;
LAB_0155188e:
          pvVar21 = _pthread_getspecific(pVar24);
          lVar16 = lVar22;
          if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            lVar16 = *(int64_t *)(lVar22 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8);
          }
          lVar17 = *(int64_t *)(lVar16 + 0x40);
          pvVar21 = _pthread_getspecific(pVar24);
          if (pvVar21 != (void *)0x0) {
            lVar17 = *(int64_t *)(lVar16 + 0x40);
            lVar16 = FUN_00e8b990();
            if (lVar16 != 0) {
              lVar17 = *(int64_t *)(lVar17 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8)
              ;
            }
          }
          if (*(int64_t *)(lVar17 + 0x60) == 0) goto LAB_01551950;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_868 = *(float *)(lVar30 + 0xf8);
            if (!NAN(local_868)) goto LAB_01551988;
          }
          else {
            local_868 = *(float *)(*(int64_t *)
                                    (lVar30 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                                  + 0xf8);
            if (!NAN(local_868) && !NAN(local_868)) {
LAB_01551988:
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              if (local_888 == '\0') {
                if (local_890 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  goto LAB_01551a0d;
                }
              }
              else if (local_890 != (int64_t *)0x0) {
LAB_01551a0d:
                pvVar21 = _pthread_getspecific(pVar24);
                if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
                  lVar16 = local_890[0x2d];
                }
                else {
                  lVar16 = *(int64_t *)
                            (local_890[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 0x168);
                }
                if (lVar16 != 0) {
                  FUN_00d50b00();
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    plVar19 = (int64_t *)local_890[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                  }
                  lVar17 = plVar19[0x17];
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                    plVar19 = (int64_t *)local_890[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
                  }
                  iVar2 = *(int *)((int64_t)plVar19 + 0xbc);
                  fVar33 = (float)FUN_014b7610();
                  pVar24 = (void*)(fVar33 / g_023942a8 + g_0239011c);
                  if ((int)pVar24 < 0) {
                    pVar24 = 0;
                  }
                  pVar28 = iVar2 - 1;
                  if ((int)pVar24 < iVar2) {
                    pVar28 = pVar24;
                  }
                  local_8b8 = (int64_t)(int)(pVar28 * ((int)lVar17 * 8 + -4) | 2) * 4 +
                              *(int64_t *)(lVar16 + 0x10);
                  FUN_00d50b20();
                  local_8a8 = (int)lVar17 * 8 + -8;
                }
                FUN_00d50b20();
              }
            }
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            lVar16 = *(int64_t *)(lVar30 + 0x168);
          }
          else {
            lVar16 = *(int64_t *)
                      (*(int64_t *)(lVar30 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                      + 0x168);
          }
          plVar19 = local_848;
          bVar8 = bVar7;
          if (lVar16 != 0) {
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb530();
            if (local_890 == local_848) {
              if ((!bVar7) && (local_890 != (int64_t *)0x0)) {
                bVar8 = true;
                if (local_888 != '\0') goto LAB_01552002;
                FUN_00d50b00();
                bVar8 = true;
              }
            }
            else {
              if (local_888 != '\0') {
                bVar8 = true;
                plVar19 = local_890;
                if ((bVar7) && (plVar19 = local_890, local_848 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  plVar19 = local_890;
                }
                goto LAB_01552002;
              }
              if (local_890 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar8 = true;
              plVar19 = local_890;
              if ((bVar7) && (local_848 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_888 != '\0') && (local_890 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01552002:
          local_848 = plVar19;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_878 = *(double *)(lVar30 + 0xe8);
            if (lVar23 != 0) goto LAB_015520f1;
LAB_01552057:
            lVar23 = this_ptr[0x23];
            *(void*)(lVar23 + 0xc) = 0x7fc00000;
            *(void*)((int64_t)this_ptr + 0x134) = 0;
            if (*(char *)((int64_t)this_ptr + 0x25f) != '\0') {
              fVar33 = g_02390124;
              if (local_848 != (int64_t *)0x0) {
                pvVar21 = _pthread_getspecific(pVar24);
                plVar19 = local_848;
                if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                  plVar19 = (int64_t *)local_848[(uint64_t)(*(uint *)(lVar23 + 0x154) & 1) + 4];
                }
                dVar36 = 0.0;
                if (0.0 <= local_860 - local_878) {
                  dVar36 = local_860 - local_878;
                }
                dVar36 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36);
                fVar33 = (float)dVar36;
                lVar23 = this_ptr[0x23];
              }
              fVar32 = *(float *)((int64_t)this_ptr + 0x26c);
              *(float *)(lVar23 + 0x10) =
                   (float)(~-(uint)(!NAN(fVar32) && !NAN(fVar32)) & (uint)fVar33 |
                          (uint)(fVar33 * fVar32) & -(uint)(!NAN(fVar32) && !NAN(fVar32))) / fVar31;
              *(void*)(lVar23 + 0xc) = 0;
              *(uint *)(lVar23 + 0x14) = uVar12;
              cVar1 = *(char *)((int64_t)this_ptr + 0x25f);
              goto joined_r0x01552188;
            }
LAB_0155218a:
            if ((char)this_ptr[0x4c] == '\0') {
              *(void*)(this_ptr[0x23] + 0x14) = *(void*)((int64_t)this_ptr + 0x134)
              ;
            }
          }
          else {
            local_878 = *(double *)
                         (*(int64_t *)
                           (lVar30 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0xe8);
            if (lVar23 == 0) goto LAB_01552057;
LAB_015520f1:
            cVar1 = *(char *)((int64_t)this_ptr + 0x25f);
joined_r0x01552188:
            if (cVar1 == '\0') goto LAB_0155218a;
          }
          *(void*)(this_ptr + 0x26) = 0;
          bVar5 = true;
          bVar4 = true;
          bVar9 = false;
          local_8e0 = dVar40;
          bVar7 = bVar8;
        }
        if (lVar22 != 0) {
          FUN_00d50b20();
          bVar4 = bVar5;
        }
        if (!bVar4) break;
      }
      uVar13 = *(uint *)(this_ptr + 0x26);
      if (uVar13 == 0) {
        uVar20 = this_ptr[0x23];
        uVar13 = *(int *)(uVar20 + 0x14) - *(int *)((int64_t)this_ptr + 0x134);
        *(uint *)(uVar20 + 0x14) = uVar13;
        if ((uVar13 == 0) && (uVar13 = 0, (char)this_ptr[0x4c] == '\0')) {
          dVar36 = 0.0;
          if (0.0 <= local_860 - local_878) {
            dVar36 = local_860 - local_878;
          }
          uVar13 = uVar11;
          if (NAN(*(float *)(uVar20 + 0xc))) {
            if (local_848 != (int64_t *)0x0) {
              pvVar21 = _pthread_getspecific((void*)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (int64_t *)local_848[(uint64_t)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar41 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36,0);
              lVar23 = this_ptr[0x23];
              *(float *)(lVar23 + 0xc) = (float)dVar41;
              uVar20 = (uint64_t)uVar11;
              *(uint *)(lVar23 + 0x14) = uVar11;
              goto LAB_015524f9;
            }
            *(void*)(uVar20 + 0xc) = 0x3f800000;
            *(uint *)(uVar20 + 0x14) = uVar11;
            fVar33 = 0.0;
          }
          else {
            *(uint *)(uVar20 + 0x14) = uVar11;
            if (local_848 == (int64_t *)0x0) {
              fVar33 = 0.0;
            }
            else {
LAB_015524f9:
              pvVar21 = _pthread_getspecific((void*)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (int64_t *)local_848[(uint64_t)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar36 = (double)(**(code **)(*plVar19 + 0x3d0))(dVar36,local_8e0);
              fVar33 = *(float *)((int64_t)this_ptr + 0x26c);
              uVar20 = this_ptr[0x23];
              fVar33 = ((float)(~-(uint)(!NAN(fVar33) && !NAN(fVar33)) & (uint)(float)dVar36 |
                               (uint)(fVar33 * (float)dVar36) &
                               -(uint)(!NAN(fVar33) && !NAN(fVar33))) - *(float *)(uVar20 + 0xc)) /
                       (float)(int)*(uint *)(uVar20 + 0x14);
              uVar13 = *(uint *)(uVar20 + 0x14);
            }
          }
          *(float *)(uVar20 + 0x10) = fVar33;
          *(void*)((int64_t)this_ptr + 0x25f) = 0;
          *(uint *)((int64_t)this_ptr + 0x134) = uVar13;
          *(uint *)(this_ptr + 0x26) = uVar13;
          lVar23 = this_ptr[0x1d];
        }
        else {
          *(uint *)((int64_t)this_ptr + 0x134) = uVar13;
          *(uint *)(this_ptr + 0x26) = uVar13;
          lVar23 = this_ptr[0x1d];
        }
      }
      else {
        lVar23 = this_ptr[0x1d];
      }
      if ((lVar23 != 0) && (!NAN(local_868))) {
        fVar33 = (float)_exp2f(local_868 * g_023941f4);
        fVar33 = fVar33 * g_023941f8;
        dVar36 = (double)local_8a8;
        if (local_8b8 == 0) {
          dVar41 = ((double)this_ptr[100] / dVar36) * g_023d5998;
          auVar37._0_8_ = (double)_sin(dVar41 + dVar41);
          auVar37._8_8_ = extraout_XMM0_Qb_00;
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = (float)auVar37._0_8_;
        }
        else {
          auVar38._0_8_ = FUN_00e838c0();
          auVar38._8_8_ = extraout_XMM0_Qb;
        }
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = auVar38._0_4_ * *(float *)(this_ptr[0x23] + 0xc);
        fVar32 = (float)FUN_00bbc5a0(auVar39._0_8_);
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            do {
              pfVar3 = (float *)local_838[uVar20];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20] = (int64_t)(pfVar3 + 1);
              pfVar3 = (float *)local_838[uVar20 + 1];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20 + 1] = (int64_t)(pfVar3 + 1);
              uVar20 = uVar20 + 2;
            } while ((uVar10 & 0xfffffffe) != uVar20);
          }
          if ((uVar10 & 1) != 0) {
            pfVar3 = (float *)local_838[uVar20];
            *pfVar3 = fVar32 + *pfVar3;
            local_838[uVar20] = (int64_t)(pfVar3 + 1);
          }
        }
        for (dVar41 = ((double)fVar33 / dVar34) * dVar36 + (double)this_ptr[100]; dVar36 <= dVar41;
            dVar41 = dVar41 - dVar36) {
        }
        this_ptr[100] = (int64_t)dVar41;
        uVar13 = *(uint *)(this_ptr + 0x26);
      }
      uVar27 = this_ptr[0x23];
      fVar33 = *(float *)(uVar27 + 0x10) + *(float *)(uVar27 + 0xc);
      *(float *)(uVar27 + 0xc) = fVar33;
      *(uint *)(this_ptr + 0x26) = uVar13 - 1;
      if (((char)this_ptr[0x4c] != '\0') && (fVar33 <= 0.0)) {
        (**(code **)(*this_ptr + 0x678))();
        break;
      }
      pvVar21 = _pthread_getspecific((void*)uVar27);
      lVar23 = lVar30;
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        lVar23 = *(int64_t *)(lVar30 + 0x20 + (uint64_t)(*(uint *)(lVar22 + 0x154) & 1) * 8);
      }
      local_860 = local_860 + dVar40;
      dVar36 = local_860 - local_878;
      if (((dVar36 <= 0.0) ||
          (*(double *)(lVar23 + 0xf0) <= dVar36 && dVar36 != *(double *)(lVar23 + 0xf0))) &&
         (*(void*)((int64_t)this_ptr + 0x25e) = 1, (char)this_ptr[0x4c] == '\0')) {
        lVar23 = this_ptr[0x23];
        *(float *)(lVar23 + 0x10) = (float)(*(uint *)(lVar23 + 0xc) ^ g_023945e0) / fVar31;
        uVar27 = (uint64_t)uVar12;
        *(uint *)(lVar23 + 0x14) = uVar12;
        *(void*)(this_ptr + 0x4c) = 1;
      }
      uVar20 = (uint64_t)(local_850 - 1U);
    } while (local_850 - 1U != 0);
    if (bVar7) {
LAB_0155290a:
      if (local_848 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01552914:
    if ((bVar6) && (lVar30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 01550b90
// ============================================================
// Function: FUN_01550b90
// Address: 01550b90
// Size: 1809 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


int64_t * FUN_01550b90(uint param_1,uint param_2)

{
  void*puVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  uint64_t uVar5;
  void*puVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void*puVar17;
  uint64_t uVar18;
  void*puVar19;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar20;
  void*puVar21;
  int iVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  void*puVar25;
  float fVar26;
  uint64_t local_a0;
  int64_t local_58;
  char local_50;
  
  local_a0 = (uint64_t)param_1;
  puVar17 = (void*)(uint64_t)param_2;
  iVar14 = param_2 * 8 + -4;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar4 = *(int64_t *)(local_58 + 0x10);
  GNFastFourierTransformer_create();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  puVar7 = (void*)FUN_00e83010();
  if (0 < (int)param_1) {
    puVar25 = *(void**)(*arg1 + 0x10);
    lVar8 = (int64_t)(int)(param_2 * 8 + -8);
    if ((int)param_2 < 3) {
      iVar15 = 2;
      uVar23 = 0;
      do {
        ___bzero();
        *puVar7 = puVar25[uVar23 * 2];
        puVar7[3] = puVar25[uVar23 * 2 + 1];
        puVar17 = (void*)(lVar4 + (int64_t)iVar15 * 4);
        FUN_00e83640(lVar4,puVar17);
        fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
        if (g_0239109c < fVar26) {
          (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
        }
        puVar17[-1] = *(void*)((int64_t)puVar17 + lVar8 * 4 + -8);
        *(void*)((int64_t)puVar17 + lVar8 * 4) = *puVar17;
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + iVar14;
      } while (local_a0 != uVar23);
    }
    else {
      puVar1 = (void*)(puVar7 + 2);
      iVar15 = param_2 - 1;
      uVar23 = (uint64_t)(param_2 - 3);
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
            puVar17 = (void*)(puVar7 + 4);
            if (iVar15 != 3) {
              puVar7[7] = puVar25[3];
              puVar9 = puVar25 + 4;
              puVar17 = (void*)(puVar7 + 6);
              puVar21 = puVar25 + 3;
              if (iVar15 != 4) {
                puVar7[9] = puVar25[4];
                puVar9 = puVar25 + 5;
                puVar17 = (void*)(puVar7 + 8);
                puVar21 = puVar25 + 4;
                if (iVar15 != 5) {
                  puVar7[0xb] = puVar25[5];
                  puVar9 = puVar25 + 6;
                  puVar17 = (void*)(puVar7 + 10);
                  puVar21 = puVar25 + 5;
                  if (iVar15 != 6) {
                    puVar7[0xd] = puVar25[6];
                    puVar9 = puVar25 + 7;
                    puVar17 = (void*)(puVar7 + 0xc);
                    puVar21 = puVar25 + 6;
                    if (iVar15 != 7) {
                      puVar7[0xf] = puVar25[7];
                      puVar9 = puVar25 + 8;
                      puVar17 = (void*)(puVar7 + 0xe);
                      puVar21 = puVar25 + 7;
                    }
                  }
                }
              }
            }
          }
          *(void*)((int64_t)puVar17 + 0xc) = *puVar9;
          puVar17 = (void*)(lVar4 + (int64_t)iVar22 * 4);
          FUN_00e83640(lVar4,puVar17);
          fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
          if (g_0239109c < fVar26) {
            (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
          }
          puVar25 = puVar21 + 2;
          puVar17[-1] = *(void*)((int64_t)puVar17 + lVar8 * 4 + -8);
          *(void*)((int64_t)puVar17 + lVar8 * 4) = *puVar17;
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
                *(void*)((int64_t)puVar19 + lVar11 * 2 + 4) =
                     *(void*)((int64_t)puVar21 + lVar11);
                uVar16 = uVar16 + 1;
                lVar12 = lVar11 + 4;
                puVar6 = puVar17 + 1;
              } while (((byte)(((char)param_2 + '\a') - cVar13) & 7) << 2 != (int)lVar12);
              puVar25 = (void*)((int64_t)puVar21 + lVar11);
              puVar19 = puVar17 + 1;
              puVar21 = (void*)((int64_t)puVar21 + lVar12);
            }
            if (6 < uVar20) {
              iVar22 = iVar15 - uVar16;
              puVar17 = puVar19 + -1;
              do {
                puVar25 = puVar21;
                *(void*)((int64_t)puVar17 + 0xc) = *puVar25;
                *(void*)((int64_t)puVar17 + 0x14) = puVar25[1];
                *(void*)((int64_t)puVar17 + 0x1c) = puVar25[2];
                *(void*)((int64_t)puVar17 + 0x24) = puVar25[3];
                *(void*)((int64_t)puVar17 + 0x2c) = puVar25[4];
                *(void*)((int64_t)puVar17 + 0x34) = puVar25[5];
                *(void*)((int64_t)puVar17 + 0x3c) = puVar25[6];
                *(void*)((int64_t)puVar17 + 0x44) = puVar25[7];
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
              auVar2 = *(uint8_t (*) [16])(puVar25 + uVar10 + 1);
              auVar3 = *(uint8_t (*) [16])(puVar25 + uVar10 + 5);
              puVar7[uVar10 * 2 + 3] = auVar2._0_4_;
              uVar5 = extractps(auVar2,1);
              *(void*)(puVar7 + uVar10 * 2 + 5) = uVar5;
              uVar5 = extractps(auVar2,2);
              *(void*)(puVar7 + uVar10 * 2 + 7) = uVar5;
              uVar5 = extractps(auVar2,3);
              *(void*)(puVar7 + uVar10 * 2 + 9) = uVar5;
              puVar7[uVar10 * 2 + 0xb] = auVar3._0_4_;
              uVar5 = extractps(auVar3,1);
              *(void*)(puVar7 + uVar10 * 2 + 0xd) = uVar5;
              uVar5 = extractps(auVar3,2);
              *(void*)(puVar7 + uVar10 * 2 + 0xf) = uVar5;
              uVar5 = extractps(auVar3,3);
              *(void*)(puVar7 + uVar10 * 2 + 0x11) = uVar5;
              uVar10 = uVar10 + 8;
            } while (uVar24 != uVar10);
            puVar19 = puVar1 + uVar24;
            uVar16 = (int)uVar24 + 1;
            if (uVar23 + 1 != uVar24) goto LAB_01551120;
            puVar25 = puVar25 + uVar24;
            puVar17 = (void*)(puVar7 + uVar24 * 2);
          }
          *(void*)((int64_t)puVar17 + 0xc) = *puVar21;
          puVar19 = (void*)(lVar4 + (int64_t)(int)(iVar14 * (int)uVar18 | 2) * 4);
          puVar17 = puVar19;
          FUN_00e83640();
          fVar26 = (float)(**(code **)(g_02786500 + 0x10))();
          if (g_0239109c < fVar26) {
            (**(code **)(g_02786500 + 0x20))(g_0239109c / fVar26);
          }
          puVar25 = puVar25 + 2;
          puVar19[-1] = *(void*)((int64_t)puVar19 + lVar8 * 4 + -8);
          *(void*)((int64_t)puVar19 + lVar8 * 4) = *puVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 != local_a0);
      }
    }
  }
  FUN_00e83070();
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01553290
// ============================================================
// Function: FUN_01553290
// Address: 01553290
// Size: 1225 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_01553290(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  int64_t *plVar6;
  void*this_ptr;
  bool bVar7;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((g_028ad180 == (void*)0x0) || (g_028ad189 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad180 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      if (g_028ad180 == puVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = g_028ad180 != (void*)0x0;
        g_028ad180 = puVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028ad188 == '\0') {
        g_028ad188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f60;
      if (g_027c6f60 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0277cf70;
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f68;
      if (g_027c6f68 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027815c0;
      if (g_027815c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f70;
      if (g_027c6f70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02775668;
      if (g_02775668 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f78;
      if (g_027c6f78 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028ad189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad189 = '\x01';
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
  local_40 = (int64_t *)lVar3;
  local_38 = '\0';
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar3 = g_027c6f80;
    local_60 = *param_2;
    local_58 = '\0';
    if (g_027c6f80 != 0) {
      FUN_00d50b00();
    }
    local_40 = (int64_t *)lVar3;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
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



// ============================================================
// 01552cd0
// ============================================================
// Function: FUN_01552cd0
// Address: 01552cd0
// Size: 524 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_01552cd0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*this_ptr;
  bool bVar5;
  
  plVar4 = g_028ad170;
  if ((g_028ad170 == (int64_t *)0x0) || (g_028ad179 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad170 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028ad170 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028ad170 != (int64_t *)0x0;
        g_028ad170 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028ad178 == '\0') {
        g_028ad178 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f40;
      if (g_027c6f40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f48;
      if (g_027c6f48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f50;
      if (g_027c6f50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f58;
      if (g_027c6f58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad179 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028ad170;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_01552ec2;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01552ec2:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0154f1a0
// ============================================================
// Function: FUN_0154f1a0
// Address: 0154f1a0
// Size: 1134 bytes
// Class: MUVoiceMapperVoiceOption
// String references:
//   "MUVoiceMapperVoiceOption"
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_0154f1a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ef878;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c4663 == '\0') {
    FUN_0154f640();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c4663 == '\0') {
    FUN_0154f7b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c4663 == '\0') {
    FUN_0154f920();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c4663 == '\0') {
    FUN_0154fa90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c4663 == '\0') {
    FUN_0154fc00();
    FUN_00e87980();
  }
  FUN_0154fd70();
  return;
}

