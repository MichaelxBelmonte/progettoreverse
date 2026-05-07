// Function: FUN_00e925a0
// Address: 00e925a0
// Size: 1868 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e925a0(void)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t *local_40;
  char local_38;
  
  plVar8 = g_02789550;
  lVar7 = *(int64_t *)(arg1 + 0x68);
  if (lVar7 == 0) {
    if (g_02789550 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar7 = *(int64_t *)(arg1 + 0x60);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*plVar8 + 0x50))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar8 = g_02789558;
    if (cVar1 == '\0') {
      if (g_02789558 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar7 = *(int64_t *)(arg1 + 0x60);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar1 = (**(code **)(*plVar8 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar1 != '\0') {
        if (*(int64_t *)(arg1 + 0x58) == 0) goto LAB_00e928ea;
        FUN_00d50b00();
        uVar9 = FUN_00d50b20();
        lVar7 = *(int64_t *)(arg1 + 0x58);
        if (lVar7 != 0) {
          uVar9 = FUN_00d50b00();
        }
        FUN_00e20800(uVar9,6);
        plVar8 = local_40;
        if ((g_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          g_026cd0e8 = FUN_00d4fe50();
          g_026cd0d0 = "GNDictionary";
          g_026cd0d8 = 0x28;
          g_026cd0e0 = FUN_00022d20;
          g_026cd0f0 = 0;
          ram_00000000026cd0f8 = 0;
          g_026cd100 = 0;
          g_026cd178 = 0;
          ram_00000000026cd180 = 0;
          g_026cd188 = 0;
          g_026cd18a = 6;
          g_026cd108 = 0;
          ram_00000000026cd110 = 0;
          g_026cd118 = 0;
          ram_00000000026cd120 = 0;
          g_026cd128 = 0;
          ram_00000000026cd130 = 0;
          g_026cd138 = 0;
          ram_00000000026cd140 = 0;
          g_026cd148 = 0;
          ram_00000000026cd150 = 0;
          g_026cd158 = 0;
          ram_00000000026cd160 = 0;
          g_026cd168 = 0;
          ram_00000000026cd170 = 0;
          g_026cd193 = 0;
          g_026cd18b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar1 = FUN_00e85ea0();
          if (cVar1 != '\0') {
            if ((g_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
              g_026d5e58 = FUN_00d4fe50();
              g_026d5e40 = "GNString";
              g_026d5e48 = 0x40;
              g_026d5e50 = FUN_0005d920;
              g_026d5e60 = 0;
              ram_00000000026d5e68 = 0;
              g_026d5e70 = 0;
              ram_00000000026d5e78 = 0;
              g_026d5e80 = 0;
              ram_00000000026d5e88 = 0;
              g_026d5e90 = 0;
              ram_00000000026d5e98 = 0;
              g_026d5ea0 = 0;
              ram_00000000026d5ea8 = 0;
              g_026d5eb0 = 0;
              ram_00000000026d5eb8 = 0;
              g_026d5ec0 = 0;
              ram_00000000026d5ec8 = 0;
              g_026d5ed0 = 0;
              ram_00000000026d5ed8 = 0;
              g_026d5ee0 = 0;
              ram_00000000026d5ee8 = 0;
              g_026d5ef0 = 0;
              ram_00000000026d5ef8 = 0;
              g_026d5f00 = 0;
              ___cxa_guard_release();
            }
            cVar1 = FUN_00e8db60();
            pplVar6 = &local_40;
            if (cVar1 == '\0') {
              pplVar6 = (int64_t **)&g_02802688;
            }
          }
        }
        plVar8 = *(int64_t **)(arg1 + 0x68);
        plVar5 = *pplVar6;
        if (plVar8 != plVar5) {
          if (*(char *)(pplVar6 + 1) == '\0') {
            if (plVar5 == (int64_t *)0x0) {
              plVar5 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar5 = *pplVar6;
              plVar8 = *(int64_t **)(arg1 + 0x68);
            }
          }
          else {
            *(void*)(pplVar6 + 1) = 0;
          }
          *(int64_t **)(arg1 + 0x68) = plVar5;
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int64_t *)(arg1 + 0x58) == 0) {
LAB_00e928ea:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return;
      }
      FUN_00d50b00();
      uVar9 = FUN_00d50b20();
      lVar7 = *(int64_t *)(arg1 + 0x58);
      if (lVar7 != 0) {
        uVar9 = FUN_00d50b00();
      }
      FUN_00d93320(uVar9,6);
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_024c23c8;
      puVar3[2] = 0;
      *(void*)(puVar3 + 3) = 0;
      FUN_00d500e0();
      FUN_00de3880();
      FUN_00de38d0();
      plVar5 = local_40;
      if ((g_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = 0;
            ram_00000000026d5e68 = 0;
            g_026d5e70 = 0;
            ram_00000000026d5e78 = 0;
            g_026d5e80 = 0;
            ram_00000000026d5e88 = 0;
            g_026d5e90 = 0;
            ram_00000000026d5e98 = 0;
            g_026d5ea0 = 0;
            ram_00000000026d5ea8 = 0;
            g_026d5eb0 = 0;
            ram_00000000026d5eb8 = 0;
            g_026d5ec0 = 0;
            ram_00000000026d5ec8 = 0;
            g_026d5ed0 = 0;
            ram_00000000026d5ed8 = 0;
            g_026d5ee0 = 0;
            ram_00000000026d5ee8 = 0;
            g_026d5ef0 = 0;
            ram_00000000026d5ef8 = 0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar1 = FUN_00e8db60();
          pplVar6 = &local_40;
          if (cVar1 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar5 = *(int64_t **)(arg1 + 0x68);
      plVar4 = *pplVar6;
      if (plVar5 != plVar4) {
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar4 == (int64_t *)0x0) {
            plVar4 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar4 = *pplVar6;
            plVar5 = *(int64_t **)(arg1 + 0x68);
          }
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
        }
        *(int64_t **)(arg1 + 0x68) = plVar4;
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    lVar7 = *(int64_t *)(arg1 + 0x68);
    if (lVar7 == 0) goto LAB_00e929e5;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00e929e5:
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

