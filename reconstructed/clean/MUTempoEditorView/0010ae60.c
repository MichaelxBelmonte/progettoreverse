// Function: FUN_0010ae60
// Address: 0010ae60
// Size: 2199 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUSignatureEditorView"
//   "MUQuarterSequenceView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010ae60(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t *local_70;
  int64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  if (*arg1 != 0) {
    if (*(char *)(this_ptr + 0xc) == '\0') {
      local_68 = *(int64_t *)(this_ptr + 0x40);
      if (local_68 == 0) {
        bVar3 = false;
        plVar10 = (int64_t *)0x0;
        local_34 = 0;
        local_68 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        bVar3 = false;
        plVar10 = (int64_t *)0x0;
      }
    }
    else {
      local_68 = *(int64_t *)(this_ptr + 0x18);
      if (local_68 == 0) {
        local_34 = 0;
      }
      else {
        uVar6 = FUN_00d50b00();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      }
      FUN_01a8c310();
      plVar10 = local_60;
      if (local_60 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
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
        if (local_60 == (int64_t *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = (int)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_0010b020:
        if (local_70 != (int64_t *)0x0) {
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
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
            lVar7 = (int64_t)(int)local_48;
            iVar9 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar9);
            if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
            plVar1 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
            local_60 = plVar1;
            if ((g_027ebf10 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
            pplVar8 = (int64_t **)&g_02802688;
            if (plVar1 != (int64_t *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar8 = &local_60;
              if (cVar5 == '\0') {
                pplVar8 = (int64_t **)&g_02802688;
              }
            }
            plVar1 = local_60;
            if (*pplVar8 == (int64_t *)0x0) {
              if ((g_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
              pplVar8 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar8 = &local_60;
                if (cVar5 == '\0') {
                  pplVar8 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = local_60;
              if (*pplVar8 == (int64_t *)0x0) {
                if ((g_026e11d8 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
                pplVar8 = (int64_t **)&g_02802688;
                if (plVar1 != (int64_t *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar8 = &local_60;
                  if (cVar5 == '\0') {
                    pplVar8 = (int64_t **)&g_02802688;
                  }
                }
                plVar1 = local_60;
                if (*pplVar8 == (int64_t *)0x0) {
                  if ((g_027e2750 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                    g_026f75c8 = FUN_0006d940();
                    g_026f75b0 = "MUQuarterSequenceView";
                    g_026f75b8 = 0x1f8;
                    g_026f75c0 = FUN_0010c6a0;
                    g_026f75d0 = 0;
                    ram_00000000026f75d8 = 0;
                    g_026f75e0 = 0;
                    ram_00000000026f75e8 = 0;
                    g_026f75f0 = 0;
                    ram_00000000026f75f8 = 0;
                    g_026f7600 = 0;
                    ram_00000000026f7608 = 0;
                    g_026f7610 = 0;
                    ram_00000000026f7618 = 0;
                    g_026f7620 = 0;
                    ram_00000000026f7628 = 0;
                    g_026f7630 = 0;
                    ram_00000000026f7638 = 0;
                    g_026f7640 = 0;
                    ram_00000000026f7648 = 0;
                    g_026f7650 = 0;
                    ram_00000000026f7658 = 0;
                    g_026f7660 = 0;
                    ram_00000000026f7668 = 0;
                    g_026f7670 = 0;
                    ___cxa_guard_release();
                  }
                  pplVar8 = (int64_t **)&g_02802688;
                  if (plVar1 != (int64_t *)0x0) {
                    (**(code **)(*plVar1 + 0x360))();
                    cVar5 = FUN_00e85ea0();
                    pplVar8 = &local_60;
                    if (cVar5 == '\0') {
                      pplVar8 = (int64_t **)&g_02802688;
                    }
                  }
                  plVar1 = local_60;
                  if (*pplVar8 != (int64_t *)0x0) {
                    lVar7 = *(int64_t *)(this_ptr + 0x20);
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
                  if (plVar10 != (int64_t *)0x0) {
                    FUN_01c878e0();
                  }
                }
              }
              else {
                FUN_01c87b20();
                if (plVar10 != (int64_t *)0x0) {
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
        if (local_60 != (int64_t *)0x0) {
          local_38 = (int)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0010b020;
        }
        local_38 = 0;
      }
      bVar4 = false;
    } while (bVar2);
    if ((bVar3) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

