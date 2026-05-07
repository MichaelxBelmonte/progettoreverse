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

