// Function: FUN_019b7a60
// Address: 019b7a60
// Size: 1826 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
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


void FUN_019b7a60(uint32_t param_1,int param_2,char param_3)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  code *in_RCX;
  code *pcVar8;
  code *pcVar9;
  int64_t *this_ptr;
  code *pcVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  bool bVar14;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  char local_a0;
  code *local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  code *local_48;
  char local_40;
  
  pcVar3 = local_48;
  pcVar8 = in_RCX;
  if (param_2 == 0) {
    param_1 = (**(code **)(*this_ptr + 0xda0))();
  }
  (**(code **)(*this_ptr + 0x9b0))(param_1,(uint64_t)in_RCX & 0xff);
  if (local_40 == '\0') {
    if (local_48 == 0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == 0x0) {
    return;
  }
  uVar1 = *(uint *)(local_48 + 0xc);
  if ((uint64_t)uVar1 == 0) goto LAB_019b8102;
  (**(code **)(*this_ptr + 0xa28))();
  local_88 = local_48;
  if (local_40 == '\0') {
    if (local_48 == 0x0) {
      local_88 = 0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  local_80 = '\x01';
  if ((g_027c0160 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    pcVar8 = FUN_0015ecf0;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (local_88 == 0x0) {
LAB_019b7b55:
    pcVar9 = g_02802688;
    local_80 = g_02802690;
    if (g_02802690 != '\0') goto LAB_019b7ba9;
LAB_019b7bb8:
    if (pcVar9 != 0x0) goto LAB_019b7bc1;
  }
  else {
    (**(code **)(*(int64_t *)local_88 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pcVar9 = local_88;
    if (cVar4 == '\0') goto LAB_019b7b55;
LAB_019b7ba9:
    if (pcVar9 == 0x0) goto LAB_019b7bb8;
    FUN_00d50b00();
LAB_019b7bc1:
    uVar15 = FUN_0025e9a0();
    if ((local_40 == '\0') && (local_48 != 0x0)) {
      uVar15 = FUN_00d50b00();
    }
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        pcVar2 = *(code **)(*(int64_t *)(pcVar3 + 0x10) + uVar11 * 8);
        if (pcVar2 != 0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((void*)pcVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0x0) {
          pvVar6 = _pthread_getspecific((void*)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar6 = _pthread_getspecific((void*)pcVar8);
          pcVar10 = local_88;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pcVar8 = local_88;
            pcVar10 = *(code **)(local_88 + ((uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4) * 8);
          }
          (**(code **)(*(int64_t *)pcVar10 + 0x3a8))(uVar15);
        }
        else {
          pvVar6 = _pthread_getspecific((void*)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific((void*)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_40 == '\0') {
            if (local_48 != 0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((void*)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if (local_48 != 0x0) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific((void*)pcVar8);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pcVar8 = pcVar9;
        }
        cVar4 = FUN_01751560();
        uVar15 = extraout_XMM0_Da;
        if (cVar4 != '\0') {
          local_40 = '\0';
          uVar15 = FUN_00d21140();
          local_48 = pcVar2;
        }
        if (pcVar2 != 0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (uint64_t)*(uint *)(pcVar3 + 0xc);
    if (uVar11 == 0) {
LAB_019b80d2:
      FUN_00d50b20();
    }
    else {
      local_a0 = (char)param_2;
      if ((local_a0 == '\0') || (param_3 == '\0')) {
LAB_019b8039:
        (**(code **)(*this_ptr + 0xdb8))(uVar15,1);
        goto LAB_019b80d2;
      }
      if (0 < (int)*(uint *)(pcVar3 + 0xc)) {
        bVar13 = true;
        uVar12 = 1;
        do {
          lVar7 = *(int64_t *)(*(int64_t *)(pcVar3 + 0x10) + -8 + uVar12 * 8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0xe20))();
          cVar4 = FUN_00d23d70();
          uVar15 = extraout_XMM0_Da_00;
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if (lVar7 != 0) {
            uVar15 = FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            if (bVar13) goto LAB_019b8039;
            break;
          }
          bVar13 = uVar12 < uVar11;
          bVar14 = uVar12 != uVar11;
          uVar12 = uVar12 + 1;
        } while (bVar14);
      }
      (**(code **)(*this_ptr + 0xdc0))(uVar15,1);
      if (pcVar3 != 0x0) goto LAB_019b80d2;
    }
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_88 != 0x0) {
    FUN_00d50b20();
  }
LAB_019b8102:
  FUN_00d50b20();
  return;
}

