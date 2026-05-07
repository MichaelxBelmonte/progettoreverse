// Function: FUN_0010ae60
// Address: 0010ae60
// Size: 2199 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
//   "MUSignatureEditorView"
//   "MUQuarterSequenceView"


/* WARNING: Removing unreachable block (ram,0x0010b211) */
/* WARNING: Removing unreachable block (ram,0x0010b221) */
/* WARNING: Removing unreachable block (ram,0x0010b1cc) */
/* WARNING: Removing unreachable block (ram,0x0010b1d8) */
/* WARNING: Removing unreachable block (ram,0x0010b2a4) */
/* WARNING: Removing unreachable block (ram,0x0010b2b0) */
/* WARNING: Removing unreachable block (ram,0x0010b132) */
/* WARNING: Removing unreachable block (ram,0x0010b142) */
/* WARNING: Removing unreachable block (ram,0x0010b2e9) */
/* WARNING: Removing unreachable block (ram,0x0010b2f9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ae60(void)

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
  longlong *unaff_RSI;
  longlong unaff_RDI;
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
  
  if (*unaff_RSI != 0) {
    if (*(char *)(unaff_RDI + 0xc) == '\0') {
      local_68 = *(longlong *)(unaff_RDI + 0x40);
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
      local_68 = *(longlong *)(unaff_RDI + 0x18);
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
                    lVar7 = *(longlong *)(unaff_RDI + 0x20);
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


