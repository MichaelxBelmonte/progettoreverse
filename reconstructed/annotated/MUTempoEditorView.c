// ===== MUTempoEditorView — Annotated small functions =====
// 17 readable functions
// Known properties: 3
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode

// ==================================================
// @0071fc50 (2359 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *plVar7;
  int iVar8;
  longlong *arg1;
  longlong *plVar9;
  int iVar10;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  int local_94;
  int local_74;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  int local_3c;
  
  if (param_1 == 0) {
    FUN_01d99db0();
    plVar9 = local_70;
    if (local_70 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99db0();
    local_3c = *(int *)((longlong)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d99a50();
    plVar9 = local_70;
    if (local_70 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d99a50();
    local_3c = *(int *)((longlong)local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
  }
  local_94 = param_1;
  if (plVar9 == (longlong *)0x0) {
    iVar10 = -1;
    local_74 = -1;
    iVar3 = -1;
    iVar4 = -1;
    plVar7 = (longlong *)*arg1;
  }
  else {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
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
      lVar5 = (longlong)(int)local_58;
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar8) break;
      plVar7 = *(longlong **)(local_60[2] + 8 + lVar5 * 8);
      local_70 = plVar7;
      if ((DAT_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        _DAT_0273c748 = FUN_0006d940();
        _DAT_0273c730 = "MUSignatureEditorView";
        _DAT_0273c738 = 0x1b0;
        _DAT_0273c740 = FUN_0010c5e0;
        _DAT_0273c750 = 0;
        uRam000000000273c758 = 0;
        _DAT_0273c760 = 0;
        _DAT_0273c7d8 = 0;
        uRam000000000273c7e0 = 0;
        _DAT_0273c7e8 = 0;
        DAT_0273c7ea = 1;
        _DAT_0273c768 = 0;
        uRam000000000273c770 = 0;
        _DAT_0273c778 = 0;
        uRam000000000273c780 = 0;
        _DAT_0273c788 = 0;
        uRam000000000273c790 = 0;
        _DAT_0273c798 = 0;
        uRam000000000273c7a0 = 0;
        _DAT_0273c7a8 = 0;
        uRam000000000273c7b0 = 0;
        _DAT_0273c7b8 = 0;
        uRam000000000273c7c0 = 0;
        _DAT_0273c7c8 = 0;
        uRam000000000273c7d0 = 0;
        DAT_0273c7f3 = 0;
        _DAT_0273c7eb = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_70;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = local_70;
      if (*pplVar6 == (longlong *)0x0) {
        if ((DAT_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_70;
          if (cVar2 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        plVar7 = local_70;
        if (*pplVar6 == (longlong *)0x0) {
          FUN_0026cb20();
          pplVar6 = (longlong **)&DAT_02802688;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_70;
            if (cVar2 == '\0') {
              pplVar6 = (longlong **)&DAT_02802688;
            }
          }
          plVar7 = local_70;
          if (*pplVar6 == (longlong *)0x0) {
            FUN_00271e80();
            pplVar6 = (longlong **)&DAT_02802688;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x360))();
              cVar2 = FUN_00e85ea0();
              pplVar6 = &local_70;
              if (cVar2 == '\0') {
                pplVar6 = (longlong **)&DAT_02802688;
              }
            }
            if (*pplVar6 != (longlong *)0x0) {
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
    plVar7 = (longlong *)*arg1;
  }
  if ((DAT_026e11d8 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_0273c748 = FUN_0006d940();
    _DAT_0273c730 = "MUSignatureEditorView";
    _DAT_0273c738 = 0x1b0;
    _DAT_0273c740 = FUN_0010c5e0;
    _DAT_0273c750 = 0;
    uRam000000000273c758 = 0;
    _DAT_0273c760 = 0;
    _DAT_0273c7d8 = 0;
    uRam000000000273c7e0 = 0;
    _DAT_0273c7e8 = 0;
    DAT_0273c7ea = 1;
    _DAT_0273c768 = 0;
    uRam000000000273c770 = 0;
    _DAT_0273c778 = 0;
    uRam000000000273c780 = 0;
    _DAT_0273c788 = 0;
    uRam000000000273c790 = 0;
    _DAT_0273c798 = 0;
    uRam000000000273c7a0 = 0;
    _DAT_0273c7a8 = 0;
    uRam000000000273c7b0 = 0;
    _DAT_0273c7b8 = 0;
    uRam000000000273c7c0 = 0;
    _DAT_0273c7c8 = 0;
    uRam000000000273c7d0 = 0;
    DAT_0273c7f3 = 0;
    _DAT_0273c7eb = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00720176:
    plVar7 = &DAT_02802688;
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
  plVar7 = (longlong *)*arg1;
  if ((DAT_027ebf10 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_0273ced8 = FUN_0006d940();
    _DAT_0273cec0 = "MUTempoEditorView";
    _DAT_0273cec8 = 0x2e8;
    _DAT_0273ced0 = FUN_0010c150;
    _DAT_0273cee0 = 0;
    uRam000000000273cee8 = 0;
    _DAT_0273cef0 = 0;
    _DAT_0273cf68 = 0;
    uRam000000000273cf70 = 0;
    _DAT_0273cf78 = 0;
    DAT_0273cf7a = 1;
    _DAT_0273cef8 = 0;
    uRam000000000273cf00 = 0;
    _DAT_0273cf08 = 0;
    uRam000000000273cf10 = 0;
    _DAT_0273cf18 = 0;
    uRam000000000273cf20 = 0;
    _DAT_0273cf28 = 0;
    uRam000000000273cf30 = 0;
    _DAT_0273cf38 = 0;
    uRam000000000273cf40 = 0;
    _DAT_0273cf48 = 0;
    uRam000000000273cf50 = 0;
    _DAT_0273cf58 = 0;
    uRam000000000273cf60 = 0;
    DAT_0273cf83 = 0;
    _DAT_0273cf7b = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_007201cf:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    if (cVar2 == '\0') goto LAB_007201cf;
  }
  if (*plVar7 == 0) {
    plVar7 = (longlong *)*arg1;
    FUN_00271e80();
    lVar5 = DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = arg1;
      if (cVar2 == '\0') {
        plVar7 = &DAT_02802688;
      }
      lVar5 = *plVar7;
    }
    if (lVar5 == 0) {
      plVar7 = (longlong *)*arg1;
      FUN_0026cb20();
      if (plVar7 == (longlong *)0x0) {
        plVar7 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar7 = arg1;
        if (cVar2 == '\0') {
          plVar7 = &DAT_02802688;
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
  if ((bVar1) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0010ae60 (2199 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *arg1;
  longlong this;
  longlong *plVar10;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*arg1 != 0) {
    if (*(char *)(this + 0xc) == '\0') {
      local_68 = *(longlong *)(this + 0x40);
      if (local_68 == 0) {
        bVar3 = false;
        plVar10 = (longlong *)0x0;
        local_34 = 0;
        local_68 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        bVar3 = false;
        plVar10 = (longlong *)0x0;
      }
    }
    else {
      local_68 = *(longlong *)(this + 0x18);
      if (local_68 == 0) {
        local_34 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_01a8c310();
      plVar10 = local_60;
      if (local_60 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar4 = true;
    do {
      bVar2 = bVar4;
      if (bVar2) {
        FUN_01d99db0();
        local_70 = local_60;
        if (local_60 == (longlong *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = (int)CONCAT71((int7)((ulonglong)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_0010b020:
        if (local_70 != (longlong *)0x0) {
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          local_50 = local_70;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar9 = -local_48._4_4_;
              }
              else {
                iVar9 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar9);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar9 = 0;
              }
              local_48 = CONCAT44(iVar9,(int)local_48);
            }
            lVar7 = (longlong)(int)local_48;
            iVar9 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar9);
            if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
            plVar1 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
            local_60 = plVar1;
            if ((DAT_027ebf10 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
              _DAT_0273ced8 = FUN_0006d940();
              _DAT_0273cec0 = "MUTempoEditorView";
              _DAT_0273cec8 = 0x2e8;
              _DAT_0273ced0 = FUN_0010c150;
              _DAT_0273cee0 = 0;
              uRam000000000273cee8 = 0;
              _DAT_0273cef0 = 0;
              _DAT_0273cf68 = 0;
              uRam000000000273cf70 = 0;
              _DAT_0273cf78 = 0;
              DAT_0273cf7a = 1;
              _DAT_0273cef8 = 0;
              uRam000000000273cf00 = 0;
              _DAT_0273cf08 = 0;
              uRam000000000273cf10 = 0;
              _DAT_0273cf18 = 0;
              uRam000000000273cf20 = 0;
              _DAT_0273cf28 = 0;
              uRam000000000273cf30 = 0;
              _DAT_0273cf38 = 0;
              uRam000000000273cf40 = 0;
              _DAT_0273cf48 = 0;
              uRam000000000273cf50 = 0;
              _DAT_0273cf58 = 0;
              uRam000000000273cf60 = 0;
              DAT_0273cf83 = 0;
              _DAT_0273cf7b = 0;
              ___cxa_guard_release();
            }
            pplVar8 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar8 = &local_60;
              if (cVar5 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            plVar1 = local_60;
            if (*pplVar8 == (longlong *)0x0) {
              if ((DAT_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                _DAT_0273c748 = FUN_0006d940();
                _DAT_0273c730 = "MUSignatureEditorView";
                _DAT_0273c738 = 0x1b0;
                _DAT_0273c740 = FUN_0010c5e0;
                _DAT_0273c750 = 0;
                uRam000000000273c758 = 0;
                _DAT_0273c760 = 0;
                _DAT_0273c7d8 = 0;
                uRam000000000273c7e0 = 0;
                _DAT_0273c7e8 = 0;
                DAT_0273c7ea = 1;
                _DAT_0273c768 = 0;
                uRam000000000273c770 = 0;
                _DAT_0273c778 = 0;
                uRam000000000273c780 = 0;
                _DAT_0273c788 = 0;
                uRam000000000273c790 = 0;
                _DAT_0273c798 = 0;
                uRam000000000273c7a0 = 0;
                _DAT_0273c7a8 = 0;
                uRam000000000273c7b0 = 0;
                _DAT_0273c7b8 = 0;
                uRam000000000273c7c0 = 0;
                _DAT_0273c7c8 = 0;
                uRam000000000273c7d0 = 0;
                DAT_0273c7f3 = 0;
                _DAT_0273c7eb = 0;
                ___cxa_guard_release();
              }
              pplVar8 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar8 = &local_60;
                if (cVar5 == '\0') {
                  pplVar8 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = local_60;
              if (*pplVar8 == (longlong *)0x0) {
                if ((DAT_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  _DAT_0273c748 = FUN_0006d940();
                  _DAT_0273c730 = "MUSignatureEditorView";
                  _DAT_0273c738 = 0x1b0;
                  _DAT_0273c740 = FUN_0010c5e0;
                  _DAT_0273c750 = 0;
                  uRam000000000273c758 = 0;
                  _DAT_0273c760 = 0;
                  _DAT_0273c7d8 = 0;
                  uRam000000000273c7e0 = 0;
                  _DAT_0273c7e8 = 0;
                  DAT_0273c7ea = 1;
                  _DAT_0273c768 = 0;
                  uRam000000000273c770 = 0;
                  _DAT_0273c778 = 0;
                  uRam000000000273c780 = 0;
                  _DAT_0273c788 = 0;
                  uRam000000000273c790 = 0;
                  _DAT_0273c798 = 0;
                  uRam000000000273c7a0 = 0;
                  _DAT_0273c7a8 = 0;
                  uRam000000000273c7b0 = 0;
                  _DAT_0273c7b8 = 0;
                  uRam000000000273c7c0 = 0;
                  _DAT_0273c7c8 = 0;
                  uRam000000000273c7d0 = 0;
                  DAT_0273c7f3 = 0;
                  _DAT_0273c7eb = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (longlong **)&DAT_02802688;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar8 = &local_60;
                  if (cVar5 == '\0') {
                    pplVar8 = (longlong **)&DAT_02802688;
                  }
                }
                plVar1 = local_60;
                if (*pplVar8 == (longlong *)0x0) {
                  if ((DAT_027e2750 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                    _DAT_026f75c8 = FUN_0006d940();
                    _DAT_026f75b0 = "MUQuarterSequenceView";
                    _DAT_026f75b8 = 0x1f8;
                    _DAT_026f75c0 = FUN_0010c6a0;
                    _DAT_026f75d0 = 0;
                    uRam00000000026f75d8 = 0;
                    _DAT_026f75e0 = 0;
                    uRam00000000026f75e8 = 0;
                    _DAT_026f75f0 = 0;
                    uRam00000000026f75f8 = 0;
                    _DAT_026f7600 = 0;
                    uRam00000000026f7608 = 0;
                    _DAT_026f7610 = 0;
                    uRam00000000026f7618 = 0;
                    _DAT_026f7620 = 0;
                    uRam00000000026f7628 = 0;
                    _DAT_026f7630 = 0;
                    uRam00000000026f7638 = 0;
                    _DAT_026f7640 = 0;
                    uRam00000000026f7648 = 0;
                    _DAT_026f7650 = 0;
                    uRam00000000026f7658 = 0;
                    _DAT_026f7660 = 0;
                    uRam00000000026f7668 = 0;
                    _DAT_026f7670 = 0;
                    ___cxa_guard_release();
                  }
                  pplVar8 = (longlong **)&DAT_02802688;
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x360))();
                    cVar5 = FUN_00e85ea0();
                    pplVar8 = &local_60;
                    if (cVar5 == '\0') {
                      pplVar8 = (longlong **)&DAT_02802688;
                    }
                  }
                  plVar1 = local_60;
                  if (*pplVar8 != (longlong *)0x0) {
                    lVar7 = *(longlong *)(this + 0x20);
                    if (lVar7 != 0) {
                      FUN_00d50b00();
                    }
                    (**(code **)(*plVar1 + 0x960))();
                    if (lVar7 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  FUN_01c87b20();
                  if (plVar10 != (longlong *)0x0) {
                    FUN_01c878e0();
                  }
                }
              }
              else {
                FUN_01c87b20();
                if (plVar10 != (longlong *)0x0) {
                  FUN_01c878e0();
                }
              }
            }
            else {
              FUN_01c51ca0();
            }
          }
          FUN_000a9680();
          if ((char)local_38 != '\0') {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01d99a50();
        local_70 = local_60;
        if (local_60 != (longlong *)0x0) {
          local_38 = (int)CONCAT71((int7)((ulonglong)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0010b020;
        }
        local_38 = 0;
      }
      bVar4 = false;
    } while (bVar2);
    if ((bVar3) && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00721510 (1941 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *arg1;
  longlong *this;
  longlong *plVar10;
  longlong lVar11;
  longlong local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (((longlong *)*arg1 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)*arg1 + 0x398))(), cVar5 == '\0')) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  (**(code **)(*(longlong *)*arg1 + 0x390))();
  plVar10 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_b8 = plVar10;
  (**(code **)(*(longlong *)*arg1 + 0x380))();
  local_78 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*arg1 + 0x3f0))();
  local_90 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*arg1 + 0x370))();
  local_88 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar10 == (longlong *)0x0) || (iVar6 = FUN_00d8c7a0(), lVar11 = DAT_02728a40, iVar6 < 0)) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto LAB_00721c56;
  }
  if (DAT_02728a40 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar11;
  local_108 = '\0';
  cVar5 = FUN_00d90eb0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)(this + 1) = 0;
    lVar1 = *arg1;
    if ((char)arg1[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this = lVar1;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      *this = lVar1;
      *(undefined1 *)(this + 1) = 1;
      *(undefined1 *)(arg1 + 1) = 0;
    }
  }
  else {
    local_80 = lVar11;
    iVar6 = FUN_00d8c7a0();
    uVar7 = FUN_00d8c7a0();
    iVar6 = iVar6 + ~uVar7;
    if (-1 < iVar6) {
      do {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        local_100 = local_80;
        local_f8 = '\0';
        cVar5 = (**(code **)(*local_60 + 0x50))();
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = local_80;
        plVar10 = local_b8;
        if (cVar5 != '\0') {
          iVar8 = FUN_00d8c7a0();
          iVar6 = iVar8 + iVar6;
          goto LAB_00721820;
        }
        bVar2 = 0 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar2);
    }
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    lVar11 = local_80;
  }
  goto LAB_00721c49;
  while( true ) {
    cVar5 = FUN_00d8ca70();
    iVar6 = iVar8 + 1;
    if ('9' < cVar5) break;
LAB_00721820:
    iVar8 = iVar6;
    iVar6 = FUN_00d8c7a0();
    if ((iVar6 <= iVar8) || (cVar5 = FUN_00d8ca70(), cVar5 < '0')) break;
  }
  FUN_00d97ce0();
  plVar3 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_00d8c7a0();
  plVar9 = plVar3;
  if (iVar8 < iVar6) {
    FUN_00d8f140();
    local_d0 = plVar3;
    local_118 = local_c8;
    FUN_00083ea0(2,&local_118);
    FUN_00d94e10();
    plVar9 = local_70;
    plVar4 = plVar3;
    if (plVar3 == local_70) {
LAB_00721940:
      plVar9 = plVar4;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar4 = plVar9;
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00721940;
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_68 = '\0';
    }
    local_60 = (longlong *)&DAT_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 == (longlong *)0x0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = plVar9;
    FUN_00d8cb40();
    local_a0 = local_70;
    local_98 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_98 = '\x01';
    local_e0 = local_88;
    local_d8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_e0,&local_a0);
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = local_78;
    FUN_00083ea0(2,&local_d0);
    FUN_00d8cb40();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_a8 = '\x01';
    local_f0 = local_88;
    local_e8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_f0,&local_b0);
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = (longlong *)&DAT_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00721c49:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_00721c56:
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00720770 (1915 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar7;
  longlong *local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  char local_90;
  int local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  
  if (((longlong *)*arg1 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*(longlong *)*arg1 + 0x398))(), cVar4 == '\0')) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    (**(code **)(*(longlong *)*arg1 + 0x390))();
    plVar7 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*arg1 + 0x380))();
    plVar6 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*arg1 + 0x3f0))();
    plVar3 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*arg1 + 0x370))();
    local_60 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((plVar7 == (longlong *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 0)) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
    }
    else {
      local_40 = plVar6;
      local_38 = plVar7;
      local_44 = 1;
      plVar7 = (longlong *)0x0;
      bVar1 = false;
      do {
        if ((local_40 == (longlong *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 1)) {
          plVar6 = local_38;
          local_a0 = 2;
          local_a8 = &DAT_024c5048;
          local_90 = 0;
          FUN_00d50b00();
          local_98 = plVar6;
          local_90 = '\x01';
          local_a8 = (longlong *)&DAT_025df2a0;
          local_88 = local_44;
          FUN_00d8cb40();
          local_b8 = local_70;
          local_b0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_b0 = '\x01';
          local_e0 = local_60;
          local_d8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_e0,&local_b8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (plVar7 != (longlong *)0x0)) {
              if (local_50 != '\0') goto LAB_00720aef;
              FUN_00d50b00();
LAB_00720c70:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720d33:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720c70;
              }
              goto joined_r0x00720d33;
            }
            if ((bVar1) && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720aef:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &DAT_024c5048;
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_f8 = local_40;
          FUN_00743400(&local_f8,&local_44,3);
          FUN_00d8cb40();
          local_c8 = local_70;
          local_c0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_c0 = '\x01';
          local_f0 = local_60;
          local_e8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_f0,&local_c8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (local_58 != (longlong *)0x0)) {
              if (local_50 != '\0') goto LAB_00720b9d;
              FUN_00d50b00();
LAB_00720d49:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720e5c:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720d49;
              }
              goto joined_r0x00720e5c;
            }
            if ((bVar1) && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720b9d:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = (longlong *)&DAT_0250bfd8;
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &DAT_024c5048;
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_44 = local_44 + 1;
        cVar4 = (**(code **)(*plVar7 + 0x398))();
      } while (((cVar4 != '\0') || (cVar4 = (**(code **)(*plVar7 + 0x3a0))(), cVar4 != '\0')) &&
              (local_44 < 99999));
      *(undefined1 *)(this + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *this = plVar7;
      *(undefined1 *)(this + 1) = 1;
      plVar7 = local_38;
      plVar6 = local_40;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return this;
}




// ==================================================
// @002b7ee0 (1540 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong **pplVar11;
  int iVar12;
  longlong *this;
  longlong *plVar13;
  bool bVar14;
  longlong local_f8;
  char local_f0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar8 = (**(code **)(*this + 0x10))();
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d99a50();
  plVar13 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_002b80f8;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
LAB_002b80f8:
    plVar13 = (longlong *)0x0;
    bVar2 = false;
    goto LAB_002b813f;
  }
  local_60[0] = '\0';
  local_68 = (longlong *)0x0;
  local_58 = plVar13;
  local_50 = 0xffffffff;
  local_48 = 0;
  while( true ) {
    lVar9 = (longlong)(int)local_50;
    iVar12 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar12);
    if (*(int *)((longlong)local_58 + 0xc) <= iVar12) break;
    plVar13 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
    local_68 = plVar13;
    if ((DAT_027ebf10 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
      _DAT_0273ced8 = FUN_0006d940();
      _DAT_0273cec0 = "MUTempoEditorView";
      _DAT_0273cec8 = 0x2e8;
      _DAT_0273ced0 = FUN_0010c150;
      _DAT_0273cee0 = 0;
      uRam000000000273cee8 = 0;
      _DAT_0273cef0 = 0;
      _DAT_0273cf68 = 0;
      uRam000000000273cf70 = 0;
      _DAT_0273cf78 = 0;
      DAT_0273cf7a = 1;
      _DAT_0273cef8 = 0;
      uRam000000000273cf00 = 0;
      _DAT_0273cf08 = 0;
      uRam000000000273cf10 = 0;
      _DAT_0273cf18 = 0;
      uRam000000000273cf20 = 0;
      _DAT_0273cf28 = 0;
      uRam000000000273cf30 = 0;
      _DAT_0273cf38 = 0;
      uRam000000000273cf40 = 0;
      _DAT_0273cf48 = 0;
      uRam000000000273cf50 = 0;
      _DAT_0273cf58 = 0;
      uRam000000000273cf60 = 0;
      DAT_0273cf83 = 0;
      _DAT_0273cf7b = 0;
      ___cxa_guard_release();
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar11 = &local_68;
      if (cVar6 == '\0') {
        pplVar11 = (longlong **)&DAT_02802688;
      }
    }
    plVar13 = *pplVar11;
    if (plVar13 != (longlong *)0x0) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
        bVar2 = true;
      }
      goto LAB_002b812d;
    }
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar12 = -local_50._4_4_;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar12 = 0;
      }
      local_50 = CONCAT44(iVar12,(int)local_50);
    }
  }
  bVar2 = false;
  plVar13 = (longlong *)0x0;
LAB_002b812d:
  FUN_000a9680();
  FUN_00d50b20();
LAB_002b813f:
  (**(code **)(*this + 0x58))();
  plVar4 = local_68;
  local_40[0] = local_60[0];
  pcVar10 = local_40;
  if (local_60[0] != '\0') {
    pcVar10 = local_60;
  }
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar6 = (**(code **)(*this + 0x48))();
  if (cVar6 != '\0') {
    (**(code **)(*plVar4 + 0x4a0))();
    plVar1 = *(longlong **)(local_68[2] + 8);
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x918))();
  }
  (**(code **)(*plVar4 + 0x4a0))();
  plVar1 = *(longlong **)local_68[2];
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x30))();
  plVar5 = local_68;
  pcVar10 = local_60;
  if (local_60[0] == '\0') {
    pcVar10 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_001060a0();
    if (local_68 == (longlong *)0x0) {
      bVar14 = false;
    }
    else {
      FUN_01d77a20();
      bVar14 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      FUN_00556e50();
      FUN_001060a0();
      uVar7 = (**(code **)(*local_68 + 0x3c8))();
      *(undefined1 *)(plVar4 + 0x29) = uVar7;
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_026fc528;
      if (DAT_026fc528 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      plVar4 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x6a8))();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c45dc0 (1191 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  int iVar8;
  longlong this;
  pthread_key_t pVar9;
  ulonglong uVar10;
  pthread_key_t pVar11;
  longlong *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  plVar1 = *(longlong **)(this + 0x1f8);
  if (*(int *)((longlong)plVar1 + 0xc) != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    FUN_00d214d0();
    FUN_00d50b20();
    local_40 = plVar1;
  }
  FUN_00d216c0();
  if ((*(int *)(this + 0x1c8) == 1) && (0 < *(int *)(*(longlong *)(this + 0x200) + 0xc)))
  {
    pVar11 = 0xffffffff;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    do {
      cVar3 = FUN_01c82ad0();
      pVar9 = pVar11;
      if (pVar11 == 0xffffffff) {
        pVar9 = (pthread_key_t)uVar7;
      }
      if (cVar3 != '\0') {
        uVar10 = uVar7 & 0xffffffff;
        pVar11 = pVar9;
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(*(longlong *)(this + 0x200) + 0xc));
    if (pVar11 != 0xffffffff) {
      pVar9 = (pthread_key_t)uVar10;
      if ((int)pVar11 <= (int)pVar9) {
        iVar8 = (pVar9 - pVar11) + 1;
        do {
          FUN_01c82ae0();
          FUN_01c82aa0();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      pVar6 = pVar11;
      FUN_01c82aa0();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(this + 0x188);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      FUN_016bf1f0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (pVar9 == *(int *)(*(longlong *)(this + 0x200) + 0xc) - 1U) {
        FUN_016bf540();
      }
      else {
        FUN_01c82aa0();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = *(longlong *)(this + 0x188);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (longlong *)FUN_016caaa0();
        FUN_00e7c280();
        FUN_016bf260();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (pVar11 == 0) {
        FUN_016bf510();
      }
    }
  }
  lVar2 = *(longlong *)(this + 0x1f8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar4 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x400))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0010d0c0 (960 bytes) — calculation
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong this;
  longlong **pplVar6;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (longlong *)*param_2;
  FUN_001152a0();
  if (plVar1 == (longlong *)0x0) {
LAB_0010d105:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d105;
  }
  plVar1 = (longlong *)*param_2;
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = DAT_026e1370;
  if (DAT_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_48;
  FUN_000175c0();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_0010d463;
  plVar4 = (longlong *)FUN_00dd6dc0();
  local_48 = plVar4;
  FUN_001156b0();
  if (plVar4 == (longlong *)0x0) {
LAB_0010d1e2:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0010d1e2;
  }
  plVar4 = *pplVar6;
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this + 0x49) == '\0') {
    local_40 = '\0';
    local_48 = plVar1;
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    plVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0010d690();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef3f0();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0010d463:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c44e90 (881 bytes) — calculation
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  longlong arg1;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(arg1 + 0x198) == 0) {
    if (*(longlong *)(arg1 + 0x1a8) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar2 = *(longlong *)(arg1 + 0x1a8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01c451ce;
    }
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(longlong *)(arg1 + 0x168) == 0) {
      lVar2 = *(longlong *)(arg1 + 0x198);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = *(longlong **)(arg1 + 0x168);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0xa00))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == 0) {
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
LAB_01c451ce:
    *(undefined1 *)(this + 1) = 0;
    if (bVar3) goto LAB_01c451e9;
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01c451e9;
    }
  }
  local_38 = 0;
LAB_01c451e9:
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @0010cbb0 (795 bytes) — calculation
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  undefined8 *arg1;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  plVar8 = (longlong *)*param_2;
  FUN_001152a0();
  if (plVar8 == (longlong *)0x0) {
LAB_0010cbf8:
    plVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = param_2;
    if (cVar5 == '\0') goto LAB_0010cbf8;
  }
  lVar3 = plVar8[1];
  if (((char)lVar3 == '\0') || (*plVar8 == 0)) {
    if (*plVar8 != 0) goto LAB_0010cc24;
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
LAB_0010cc24:
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_40 == '\0') {
      if (local_48 != 0) goto LAB_0010cc87;
    }
    else if (local_48 != 0) {
      FUN_00d50b20();
LAB_0010cc87:
      FUN_00dd6a00();
      local_48 = DAT_026e1370;
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
        local_48 = DAT_026e1370;
      }
      DAT_026e1370 = local_48;
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      FUN_00ca0840();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
    }
    bVar1 = false;
  }
  pVar7 = (pthread_key_t)plVar8;
  plVar8 = (longlong *)*param_2;
  FUN_001154a0();
  if (plVar8 == (longlong *)0x0) {
LAB_0010cd7c:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0010cd7c;
  }
  lVar4 = param_2[1];
  if (((char)lVar4 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) goto LAB_0010ce9e;
  }
  else {
    FUN_00d50b00();
  }
  plVar8 = (longlong *)*arg1;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar2 = DAT_02765280;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar2 = DAT_02765280;
  }
  DAT_02765280 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x4f0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar4 != '\0') {
    FUN_00d50b20();
  }
LAB_0010ce9e:
  if ((char)lVar3 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c46820 (725 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *arg1;
  longlong *this;
  bool bVar4;
  int iVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar1 = *arg1;
  if ((param_2 & 2) != 0) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar4 = false;
    }
    else {
      iVar5 = 0;
      do {
        FUN_01c82ad0();
        FUN_01c82ae0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
      bVar4 = true;
    }
    FUN_01c79df0();
    goto LAB_01c46ad4;
  }
  if (lVar1 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar1 + 0xc) != 0;
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01c4696a;
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      cVar2 = FUN_01c82ad0();
    } while (cVar2 != '\0');
    bVar6 = false;
LAB_01c4696a:
    FUN_01c79df0();
  }
  bVar4 = false;
  if (((param_2 & 4) == 0) && (bVar4 = false, !bVar6)) {
    FUN_01c46c40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_01c469c6;
      }
    }
    else if (local_58 != 0) {
LAB_01c469c6:
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar4 = false;
      }
      else {
        iVar5 = 0;
        bVar4 = false;
        do {
          cVar2 = FUN_01c82ad0();
          if (cVar2 != '\0') {
            bVar4 = true;
            FUN_01c82ae0();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_58 + 0xc));
      }
      FUN_01c79df0();
      FUN_00d50b20();
      goto LAB_01c46a54;
    }
    bVar4 = false;
  }
LAB_01c46a54:
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        cVar2 = FUN_01c82ad0();
        if (cVar2 == '\0') {
          bVar4 = true;
          FUN_01c82ae0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c79df0();
  }
LAB_01c46ad4:
  if (bVar4) {
    (**(code **)(*this + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
  }
  return;
}




// ==================================================
// @00722260 (704 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  longlong *this;
  longlong lVar7;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_58;
  char local_50;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_90 = 0;
    local_98 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_98 = lVar2;
        cVar3 = FUN_00d23d70();
        if (cVar3 != '\0') {
          *(undefined1 *)(this + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this = lVar2;
          *(undefined1 *)(this + 1) = 1;
          FUN_000be170();
          if (puVar4 == (undefined8 *)0x0) {
            return this;
          }
          goto LAB_007224e5;
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if (lVar2 != 0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d214d0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  local_b8 = *param_2;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = puVar4;
  FUN_00722260(&local_a8,&local_b8);
  if (puVar4 != (undefined8 *)0x0) {
LAB_007224e5:
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @008634f0 (626 bytes) — calculation
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  bool bVar1;
  int iVar2;
  
  if (DAT_0271ad90 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_0271ad60 != '=';
      _DAT_0271ad80 = -(uint)(*DAT_0271ad60 == '=');
      _DAT_0271ad84 = 0;
      if (*DAT_0271ad68 != '=') {
        _DAT_0271ad84 = (uint)bVar1;
      }
      _DAT_0271ad88 = 1;
      if (*DAT_0271ad70 != '=') {
        _DAT_0271ad88 = _DAT_0271ad84 + 1;
      }
      DAT_0271ad8c = _DAT_0271ad84 == bVar1 && _DAT_0271ad88 == _DAT_0271ad84 + 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271adc8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_0271ad98 = "MUEditTimelineMode";
      _DAT_0271ada0 = 3;
      DAT_0271ada4 = DAT_0271ad8c;
      _DAT_0271ada8 = &DAT_0271ad80;
      _DAT_0271adb0 = &DAT_0271ad60;
      _DAT_0271adb8 = 0;
      uRam000000000271adc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0273d450 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_027ebf10 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0273d410 = "_editTimelineMode";
      _DAT_0273d418 = &DAT_0273cec0;
      _DAT_0273d420 = 0;
      _DAT_0273d428 = 0x6500;
      _DAT_0273d430 = "MUEditTimelineMode";
      _DAT_0273d438 = &DAT_0271ad98;
      _DAT_0273d440 = 0;
      uRam000000000273d448 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0273d410;
}




// ==================================================
// @00863790 (574 bytes) — logic_branch
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  int iVar1;
  
  if (DAT_0273d5c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      DAT_0273d5b8 = FUN_000f9810(0,0);
      ___cxa_guard_release();
    }
  }
  if (DAT_0273d5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0273d5c8 = "MUTimelineToolMode";
      _DAT_0273d5d0 = 0x16;
      DAT_0273d5d4 = DAT_0273d5b8;
      _DAT_0273d5d8 = &DAT_0273d560;
      _DAT_0273d5e0 = &DAT_0273d4a0;
      _DAT_0273d5e8 = 0;
      uRam000000000273d5f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0273d498 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027ebf10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0273d458 = "_toolMode";
      _DAT_0273d460 = &DAT_0273cec0;
      _DAT_0273d468 = 0;
      _DAT_0273d470 = 0x6500;
      _DAT_0273d478 = "MUTimelineToolMode";
      _DAT_0273d480 = &DAT_0273d5c8;
      _DAT_0273d488 = 0;
      uRam000000000273d490 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0273d458;
}




// ==================================================
// @00866df0 (550 bytes) — logic_branch
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  int iVar1;
  
  if (DAT_0273dd78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0273dd68 = 0x100000000;
      DAT_0273dd70 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273ddb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0273dd80 = "MUTempoEditMode";
      _DAT_0273dd88 = 2;
      DAT_0273dd8c = DAT_0273dd70;
      _DAT_0273dd90 = &DAT_0273dd68;
      _DAT_0273dd98 = &DAT_0273dd50;
      _DAT_0273dda0 = 0;
      uRam000000000273dda8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0273dd48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027ebf10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0273dd08 = "_tempoEditMode";
      _DAT_0273dd10 = &DAT_0273cec0;
      _DAT_0273dd18 = 0;
      _DAT_0273dd20 = 0x6500;
      _DAT_0273dd28 = "MUTempoEditMode";
      _DAT_0273dd30 = &DAT_0273dd80;
      _DAT_0273dd38 = 0;
      uRam000000000273dd40 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0273dd08;
}




// ==================================================
// @0010c180 (523 bytes) — calculation
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_0006daf0();
  *this = &DAT_0266bec8;
  this[2] = &DAT_0266c900;
  this[0x27] = &DAT_0266c940;
  this[0x28] = &DAT_0266c990;
  this[0x29] = 0;
  this[0x2a] = 0;
  this[0x2b] = 0;
  this[0x2c] = 0;
  this[0x2d] = 0;
  this[0x2e] = 0;
  this[0x2f] = 0;
  this[0x30] = 0;
  *(undefined8 *)((longlong)this + 0x181) = 0;
  *(undefined8 *)((longlong)this + 0x189) = 0;
  this[0x33] = 0;
  this[0x34] = 0;
  this[0x35] = 0;
  this[0x36] = 0;
  this[0x37] = 0;
  this[0x38] = 0;
  *(undefined8 *)((longlong)this + 0x1c1) = 0;
  *(undefined8 *)((longlong)this + 0x1c9) = 0;
  this[0x3b] = 0;
  this[0x3c] = 0;
  this[0x3d] = 0;
  this[0x3e] = 0;
  this[0x3f] = 0;
  if (DAT_02802630 < 2) {
    this[0x40] = 0;
    this[0x41] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x3f] = puVar3;
    iVar2 = DAT_02802630;
    this[0x40] = 0;
    if (iVar2 < 2) {
      this[0x41] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x40] = puVar3;
      iVar2 = DAT_02802630;
      this[0x41] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        this[0x41] = puVar3;
      }
    }
  }
  this[0x42] = 0;
  *(undefined1 *)(this + 0x43) = 0;
  *(undefined8 *)((longlong)this + 0x21c) = 0;
  *(undefined8 *)((longlong)this + 0x224) = 0;
  *(undefined8 *)((longlong)this + 0x229) = 0;
  *(undefined8 *)((longlong)this + 0x231) = 0;
  *(undefined8 *)((longlong)this + 0x23c) = 0;
  *(undefined8 *)((longlong)this + 0x244) = 0;
  *(undefined8 *)((longlong)this + 0x249) = 0;
  *(undefined8 *)((longlong)this + 0x254) = 0;
  *(undefined8 *)((longlong)this + 0x25c) = 0;
  *(undefined8 *)((longlong)this + 0x264) = 0;
  this[0x4e] = 0;
  this[0x4f] = 0;
  this[0x50] = 0;
  this[0x51] = 0;
  this[0x52] = 0;
  this[0x53] = 0;
  *(undefined8 *)((longlong)this + 0x29c) = 0;
  *(undefined8 *)((longlong)this + 0x2a4) = 0;
  this[0x56] = 0;
  this[0x57] = 0;
  this[0x58] = 0;
  this[0x59] = 0;
  this[0x5a] = 0;
  this[0x5b] = 0;
  *(undefined4 *)((longlong)this + 0x2df) = 0;
  return;
}




// ==================================================
// @01c45890 (513 bytes) — math_loop
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *arg1;
  longlong *this;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01c45b80();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  local_58 = *param_2;
  cVar3 = FUN_00d23d70();
  lVar5 = lVar2;
  if (cVar3 == '\0') {
    lVar1 = arg1[0x40];
    if (lVar1 != 0) {
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_01c82aa0();
        FUN_01c82ae0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01c79df0();
    }
    (**(code **)(*arg1 + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
    FUN_01c465e0();
    if (lVar2 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_58;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *this = lVar5;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @00865db0 (512 bytes) — logic_branch
// Known properties of MUTempoEditorView:
// _toolMode, _tempoEditMode, _editTimelineMode

{
  int iVar1;
  int iVar2;
  
  if (DAT_0273da70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_027ebf10 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0273ced8 = FUN_0006d940();
          _DAT_0273cec0 = "MUTempoEditorView";
          _DAT_0273cec8 = 0x2e8;
          _DAT_0273ced0 = FUN_0010c150;
          _DAT_0273cee0 = 0;
          uRam000000000273cee8 = 0;
          _DAT_0273cef0 = 0;
          _DAT_0273cf68 = 0;
          uRam000000000273cf70 = 0;
          _DAT_0273cf78 = 0;
          DAT_0273cf7a = 1;
          _DAT_0273cef8 = 0;
          uRam000000000273cf00 = 0;
          _DAT_0273cf08 = 0;
          uRam000000000273cf10 = 0;
          _DAT_0273cf18 = 0;
          uRam000000000273cf20 = 0;
          _DAT_0273cf28 = 0;
          uRam000000000273cf30 = 0;
          _DAT_0273cf38 = 0;
          uRam000000000273cf40 = 0;
          _DAT_0273cf48 = 0;
          uRam000000000273cf50 = 0;
          _DAT_0273cf58 = 0;
          uRam000000000273cf60 = 0;
          DAT_0273cf83 = 0;
          _DAT_0273cf7b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0273da50 = (iVar1 != 0) << 6 | 0x80;
      _DAT_0273da38 = "_tempoEditorDelegate";
      _DAT_0273da40 = &DAT_0273cec0;
      _DAT_0273da48 = 0;
      _DAT_0273da58 = 0;
      uRam000000000273da60 = 0;
      _DAT_0273da68 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0273da78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027195c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027195b0 = "MUTempoEditorDelegate";
          DAT_027195c0 = 0;
          _DAT_027195b8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0273da38;
}



