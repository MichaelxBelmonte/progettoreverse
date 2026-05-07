// ===== MUCTCandidateChord — Annotated small functions =====
// 2 readable functions

// ==================================================
// @018e4230 (1327 bytes) — math_loop

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int unaff_ESI;
  longlong *this;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(*this + 0xc);
  if (1 < (int)uVar1) {
    plVar4 = *(longlong **)(*this + 0x10);
    if (*(int *)(*plVar4 + 0x18) != unaff_ESI) {
      uVar5 = 1;
      do {
        if (*(int *)(plVar4[uVar5] + 0x18) == unaff_ESI) goto LAB_018e46e9;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    plVar4 = (longlong *)**(longlong **)(*(longlong *)(*(longlong *)(*plVar4 + 0x10) + 0x18) + 0x10)
    ;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027c7de0;
    if (DAT_027c7de0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar2 == '\0') {
      plVar4 = (longlong *)
               **(longlong **)
                 (*(longlong *)(*(longlong *)(**(longlong **)(*this + 0x10) + 0x10) + 0x18) +
                 0x10);
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027df400;
      if (DAT_027df400 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar4 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar2 == '\0') {
        plVar4 = (longlong *)
                 **(longlong **)
                   (*(longlong *)(*(longlong *)(**(longlong **)(*this + 0x10) + 0x10) + 0x18) +
                   0x10);
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02781710;
        if (DAT_02781710 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar4 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((cVar2 != '\0') && (lVar3 = *this, 1 < *(int *)(lVar3 + 0xc))) {
          uVar5 = 1;
          do {
            plVar4 = (longlong *)
                     **(longlong **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = DAT_027c7dd8;
            if (DAT_027c7dd8 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(longlong **)(*this + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
              if ((iVar6 != 7) && (iVar6 != 4)) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *this;
          } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
        }
      }
      else {
        lVar3 = *this;
        if (1 < *(int *)(lVar3 + 0xc)) {
          uVar5 = 1;
          do {
            plVar4 = (longlong *)
                     **(longlong **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = DAT_027c7de0;
            if (DAT_027c7de0 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(longlong **)(*this + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc !=
                  10) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *this;
          } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
        }
      }
    }
    else {
      lVar3 = *this;
      if (1 < *(int *)(lVar3 + 0xc)) {
        uVar5 = 1;
        do {
          plVar4 = (longlong *)
                   **(longlong **)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10)
                       + 0x18) + 0x10);
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_027df400;
          if (DAT_027df400 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (cVar2 != '\0') {
            plVar4 = *(longlong **)(*this + 0x10);
            iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
            if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc != 3)
            {
              return;
            }
LAB_018e46e9:
            lVar3 = plVar4[uVar5 & 0xffffffff];
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            FUN_00d23370();
            if (lVar3 == 0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
          uVar5 = uVar5 + 1;
          lVar3 = *this;
        } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
      }
    }
  }
  return;
}




// ==================================================
// @018e4ec0 (973 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02614f50;
  FUN_018e52f0();
  *(undefined4 *)(this + 3) = 0;
  if (DAT_027dfa88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027df9d8 = FUN_00d4fe50();
      _DAT_027df9c0 = "MUCTCandidateChord";
      _DAT_027df9c8 = 0x38;
      _DAT_027df9d0 = FUN_018e4d20;
      _DAT_027df9e0 = 0;
      uRam00000000027df9e8 = 0;
      _DAT_027df9f0 = 0;
      uRam00000000027df9f8 = 0;
      _DAT_027dfa00 = 0;
      uRam00000000027dfa08 = 0;
      _DAT_027dfa10 = 0;
      uRam00000000027dfa18 = 0;
      _DAT_027dfa20 = 0;
      uRam00000000027dfa28 = 0;
      _DAT_027dfa30 = 0;
      uRam00000000027dfa38 = 0;
      _DAT_027dfa40 = 0;
      uRam00000000027dfa48 = 0;
      _DAT_027dfa50 = 0;
      uRam00000000027dfa58 = 0;
      _DAT_027dfa60 = 0;
      uRam00000000027dfa68 = 0;
      _DAT_027dfa70 = 0;
      _uRam00000000027dfa78 = 0;
      _DAT_027dfa80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dfa7b == '\0') {
    FUN_018e5570();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x1c) = 0;
  if (DAT_027dfa88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027df9d8 = FUN_00d4fe50();
      _DAT_027df9c0 = "MUCTCandidateChord";
      _DAT_027df9c8 = 0x38;
      _DAT_027df9d0 = FUN_018e4d20;
      _DAT_027df9e0 = 0;
      uRam00000000027df9e8 = 0;
      _DAT_027df9f0 = 0;
      uRam00000000027df9f8 = 0;
      _DAT_027dfa00 = 0;
      uRam00000000027dfa08 = 0;
      _DAT_027dfa10 = 0;
      uRam00000000027dfa18 = 0;
      _DAT_027dfa20 = 0;
      uRam00000000027dfa28 = 0;
      _DAT_027dfa30 = 0;
      uRam00000000027dfa38 = 0;
      _DAT_027dfa40 = 0;
      uRam00000000027dfa48 = 0;
      _DAT_027dfa50 = 0;
      uRam00000000027dfa58 = 0;
      _DAT_027dfa60 = 0;
      uRam00000000027dfa68 = 0;
      _DAT_027dfa70 = 0;
      _uRam00000000027dfa78 = 0;
      _DAT_027dfa80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dfa7b == '\0') {
    FUN_018e56e0();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 4) = 0;
  if (DAT_027dfa88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027df9d8 = FUN_00d4fe50();
      _DAT_027df9c0 = "MUCTCandidateChord";
      _DAT_027df9c8 = 0x38;
      _DAT_027df9d0 = FUN_018e4d20;
      _DAT_027df9e0 = 0;
      uRam00000000027df9e8 = 0;
      _DAT_027df9f0 = 0;
      uRam00000000027df9f8 = 0;
      _DAT_027dfa00 = 0;
      uRam00000000027dfa08 = 0;
      _DAT_027dfa10 = 0;
      uRam00000000027dfa18 = 0;
      _DAT_027dfa20 = 0;
      uRam00000000027dfa28 = 0;
      _DAT_027dfa30 = 0;
      uRam00000000027dfa38 = 0;
      _DAT_027dfa40 = 0;
      uRam00000000027dfa48 = 0;
      _DAT_027dfa50 = 0;
      uRam00000000027dfa58 = 0;
      _DAT_027dfa60 = 0;
      uRam00000000027dfa68 = 0;
      _DAT_027dfa70 = 0;
      _uRam00000000027dfa78 = 0;
      _DAT_027dfa80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dfa7b == '\0') {
    FUN_018e5850();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x24) = 0;
  if (DAT_027dfa88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027df9d8 = FUN_00d4fe50();
      _DAT_027df9c0 = "MUCTCandidateChord";
      _DAT_027df9c8 = 0x38;
      _DAT_027df9d0 = FUN_018e4d20;
      _DAT_027df9e0 = 0;
      uRam00000000027df9e8 = 0;
      _DAT_027df9f0 = 0;
      uRam00000000027df9f8 = 0;
      _DAT_027dfa00 = 0;
      uRam00000000027dfa08 = 0;
      _DAT_027dfa10 = 0;
      uRam00000000027dfa18 = 0;
      _DAT_027dfa20 = 0;
      uRam00000000027dfa28 = 0;
      _DAT_027dfa30 = 0;
      uRam00000000027dfa38 = 0;
      _DAT_027dfa40 = 0;
      uRam00000000027dfa48 = 0;
      _DAT_027dfa50 = 0;
      uRam00000000027dfa58 = 0;
      _DAT_027dfa60 = 0;
      uRam00000000027dfa68 = 0;
      _DAT_027dfa70 = 0;
      _uRam00000000027dfa78 = 0;
      _DAT_027dfa80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dfa7b == '\0') {
    FUN_018e59c0();
    FUN_00e87980();
  }
  FUN_018e5b30();
  FUN_018e5db0();
  return;
}



