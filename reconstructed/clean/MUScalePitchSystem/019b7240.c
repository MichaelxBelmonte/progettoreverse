// Function: FUN_019b7240
// Address: 019b7240
// Size: 1327 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_019b7240(uint32_t param_1,int param_2,char param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  uint8_t in_CL;
  int64_t *plVar9;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  bool bVar14;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  char local_80;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_40;
  if (param_2 == 0) {
    param_1 = (**(code **)(*this_ptr + 0xda0))();
  }
  (**(code **)(*this_ptr + 0x9b0))(param_1,in_CL);
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  uVar1 = *(uint *)((int64_t)local_40 + 0xc);
  if ((uint64_t)uVar1 != 0) {
    (**(code **)(*this_ptr + 0xa28))();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar9 = (int64_t *)&g_02572358;
    *puVar6 = &g_02572358;
    (*g_02572370)();
    uVar15 = FUN_00d21370();
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        plVar2 = *(int64_t **)(plVar3[2] + uVar11 * 8);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)plVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific((void*)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar7 = _pthread_getspecific((void*)plVar9);
          plVar10 = plVar3;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar9 = plVar3;
            plVar10 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          iVar5 = (**(code **)(*plVar10 + 0x3a8))(uVar15);
          uVar15 = extraout_XMM0_Da_00;
        }
        else {
          pvVar7 = _pthread_getspecific((void*)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar7 = _pthread_getspecific((void*)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((void*)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar5 = FUN_01507f00();
          uVar15 = extraout_XMM0_Da;
          if (local_40 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b20();
          }
        }
        if (iVar5 == unaff_ESI) {
          local_38 = '\0';
          uVar15 = FUN_00d21140();
          local_40 = plVar2;
        }
        if (plVar2 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (uint64_t)*(uint *)((int64_t)puVar6 + 0xc);
    if (uVar11 != 0) {
      local_80 = (char)param_2;
      if ((local_80 == '\0') || (param_3 == '\0')) {
LAB_019b76f3:
        (**(code **)(*this_ptr + 0xdb8))(uVar15,1);
      }
      else {
        if (0 < (int)*(uint *)((int64_t)puVar6 + 0xc)) {
          bVar13 = true;
          uVar12 = 1;
          do {
            lVar8 = *(int64_t *)(puVar6[2] + -8 + uVar12 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*this_ptr + 0xe20))();
            cVar4 = FUN_00d23d70();
            uVar15 = extraout_XMM0_Da_01;
            if ((local_58 != '\0') && (local_60 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if (lVar8 != 0) {
              uVar15 = FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              if (bVar13) goto LAB_019b76f3;
              break;
            }
            bVar13 = uVar12 < uVar11;
            bVar14 = uVar12 != uVar11;
            uVar12 = uVar12 + 1;
          } while (bVar14);
        }
        (**(code **)(*this_ptr + 0xdc0))(uVar15,1);
      }
    }
    FUN_00d50b20();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

