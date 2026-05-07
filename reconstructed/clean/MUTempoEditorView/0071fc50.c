// Function: FUN_0071fc50
// Address: 0071fc50
// Size: 2359 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUSignatureEditorView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0071fc50(int param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *plVar9;
  int iVar10;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int local_94;
  int local_74;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int local_3c;
  
  if (param_1 == 0) {
    FUN_01d99db0();
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99db0();
    local_3c = *(int *)((int64_t)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d99a50();
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99a50();
    local_3c = *(int *)((int64_t)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  local_94 = param_1;
  if (plVar9 == (int64_t *)0x0) {
    iVar10 = -1;
    local_74 = -1;
    iVar3 = -1;
    iVar4 = -1;
    plVar7 = (int64_t *)*arg1;
  }
  else {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar9;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar10 = -1;
    local_58._4_4_ = 0;
    local_74 = -1;
    iVar3 = -1;
    iVar4 = -1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar8 = -local_58._4_4_;
        }
        else {
          iVar8 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar8);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar8 = 0;
        }
        local_58 = CONCAT44(iVar8,(int)local_58);
      }
      lVar5 = (int64_t)(int)local_58;
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar8) break;
      plVar7 = *(int64_t **)(local_60[2] + 8 + lVar5 * 8);
      local_70 = plVar7;
      if ((g_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_0273c748 = FUN_0006d940();
        g_0273c730 = "MUSignatureEditorView";
        g_0273c738 = 0x1b0;
        g_0273c740 = FUN_0010c5e0;
        g_0273c750 = 0;
        ram_000000000273c758 = 0;
        g_0273c760 = 0;
        g_0273c7d8 = 0;
        ram_000000000273c7e0 = 0;
        g_0273c7e8 = 0;
        g_0273c7ea = 1;
        g_0273c768 = 0;
        ram_000000000273c770 = 0;
        g_0273c778 = 0;
        ram_000000000273c780 = 0;
        g_0273c788 = 0;
        ram_000000000273c790 = 0;
        g_0273c798 = 0;
        ram_000000000273c7a0 = 0;
        g_0273c7a8 = 0;
        ram_000000000273c7b0 = 0;
        g_0273c7b8 = 0;
        ram_000000000273c7c0 = 0;
        g_0273c7c8 = 0;
        ram_000000000273c7d0 = 0;
        g_0273c7f3 = 0;
        g_0273c7eb = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_70;
        if (cVar2 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_70;
      if (*pplVar6 == (int64_t *)0x0) {
        if ((g_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_0273ced8 = FUN_0006d940();
          g_0273cec0 = "MUTempoEditorView";
          g_0273cec8 = 0x2e8;
          g_0273ced0 = FUN_0010c150;
          g_0273cee0 = 0;
          ram_000000000273cee8 = 0;
          g_0273cef0 = 0;
          g_0273cf68 = 0;
          ram_000000000273cf70 = 0;
          g_0273cf78 = 0;
          g_0273cf7a = 1;
          g_0273cef8 = 0;
          ram_000000000273cf00 = 0;
          g_0273cf08 = 0;
          ram_000000000273cf10 = 0;
          g_0273cf18 = 0;
          ram_000000000273cf20 = 0;
          g_0273cf28 = 0;
          ram_000000000273cf30 = 0;
          g_0273cf38 = 0;
          ram_000000000273cf40 = 0;
          g_0273cf48 = 0;
          ram_000000000273cf50 = 0;
          g_0273cf58 = 0;
          ram_000000000273cf60 = 0;
          g_0273cf83 = 0;
          g_0273cf7b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_70;
          if (cVar2 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar6 == (int64_t *)0x0) {
          FUN_0026cb20();
          pplVar6 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_70;
            if (cVar2 == '\0') {
              pplVar6 = (int64_t **)&g_02802688;
            }
          }
          plVar7 = local_70;
          if (*pplVar6 == (int64_t *)0x0) {
            FUN_00271e80();
            pplVar6 = (int64_t **)&g_02802688;
            if (plVar7 != (int64_t *)0x0) {
              (**(code **)(*plVar7 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar6 = &local_70;
              if (cVar2 == '\0') {
                pplVar6 = (int64_t **)&g_02802688;
              }
            }
            if (*pplVar6 != (int64_t *)0x0) {
              iVar4 = local_50 + (int)local_58;
            }
          }
          else {
            local_74 = local_50 + (int)local_58;
          }
        }
        else {
          iVar3 = local_50 + (int)local_58;
        }
      }
      else {
        iVar10 = local_50 + (int)local_58;
      }
    }
    FUN_000a9680();
    plVar7 = (int64_t *)*arg1;
  }
  if ((g_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_0273c748 = FUN_0006d940();
    g_0273c730 = "MUSignatureEditorView";
    g_0273c738 = 0x1b0;
    g_0273c740 = FUN_0010c5e0;
    g_0273c750 = 0;
    ram_000000000273c758 = 0;
    g_0273c760 = 0;
    g_0273c7d8 = 0;
    ram_000000000273c7e0 = 0;
    g_0273c7e8 = 0;
    g_0273c7ea = 1;
    g_0273c768 = 0;
    ram_000000000273c770 = 0;
    g_0273c778 = 0;
    ram_000000000273c780 = 0;
    g_0273c788 = 0;
    ram_000000000273c790 = 0;
    g_0273c798 = 0;
    ram_000000000273c7a0 = 0;
    g_0273c7a8 = 0;
    ram_000000000273c7b0 = 0;
    g_0273c7b8 = 0;
    ram_000000000273c7c0 = 0;
    g_0273c7c8 = 0;
    ram_000000000273c7d0 = 0;
    g_0273c7f3 = 0;
    g_0273c7eb = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_00720176:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar2 == '\0') goto LAB_00720176;
  }
  if (*plVar7 != 0) {
    local_3c = 0;
    if (-1 < iVar3) {
      local_3c = iVar3;
    }
    goto LAB_007202d7;
  }
  plVar7 = (int64_t *)*arg1;
  if ((g_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_0273ced8 = FUN_0006d940();
    g_0273cec0 = "MUTempoEditorView";
    g_0273cec8 = 0x2e8;
    g_0273ced0 = FUN_0010c150;
    g_0273cee0 = 0;
    ram_000000000273cee8 = 0;
    g_0273cef0 = 0;
    g_0273cf68 = 0;
    ram_000000000273cf70 = 0;
    g_0273cf78 = 0;
    g_0273cf7a = 1;
    g_0273cef8 = 0;
    ram_000000000273cf00 = 0;
    g_0273cf08 = 0;
    ram_000000000273cf10 = 0;
    g_0273cf18 = 0;
    ram_000000000273cf20 = 0;
    g_0273cf28 = 0;
    ram_000000000273cf30 = 0;
    g_0273cf38 = 0;
    ram_000000000273cf40 = 0;
    g_0273cf48 = 0;
    ram_000000000273cf50 = 0;
    g_0273cf58 = 0;
    ram_000000000273cf60 = 0;
    g_0273cf83 = 0;
    g_0273cf7b = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_007201cf:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar2 == '\0') goto LAB_007201cf;
  }
  if (*plVar7 == 0) {
    plVar7 = (int64_t *)*arg1;
    FUN_00271e80();
    lVar5 = g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = arg1;
      if (cVar2 == '\0') {
        plVar7 = &g_02802688;
      }
      lVar5 = *plVar7;
    }
    if (lVar5 == 0) {
      plVar7 = (int64_t *)*arg1;
      FUN_0026cb20();
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = &g_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar7 = arg1;
        if (cVar2 == '\0') {
          plVar7 = &g_02802688;
        }
      }
      if (*plVar7 != 0) {
        if (-1 < iVar10) {
          local_3c = iVar10 + 1;
        }
        iVar10 = iVar3 + 1;
        if (iVar3 < 0) {
          iVar10 = local_3c;
        }
        local_3c = iVar4 + 1;
        if (iVar4 < 0) {
          local_3c = iVar10;
        }
      }
    }
    else {
      if (-1 < iVar10) {
        local_3c = iVar10 + 1;
      }
      iVar4 = iVar3 + 1;
      if (iVar3 < 0) {
        iVar4 = local_3c;
      }
      local_3c = iVar4;
      if (-1 < local_74) {
        local_3c = local_74;
      }
    }
  }
  else {
    local_3c = 0;
    if (-1 < iVar10) {
      local_3c = iVar10 + 1;
    }
  }
LAB_007202d7:
  if ((char)local_94 == '\0') {
    local_b8 = *arg1;
    local_b0 = '\0';
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_01d99230(&local_a8,local_3c);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c8 = *param_2;
    local_c0 = '\0';
    FUN_01d98360(&local_c8,local_3c);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

