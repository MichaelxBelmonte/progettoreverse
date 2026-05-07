// ===================================================================
// MUCTCandidateChord — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (7):
//                   _chordType
//                   _rootPitchClass
//                   _lowestNotePitchClass
//                   _satisfactionQuality
//                   _intervalDeviation
//                   _alienIntervals
//                   _omittedIntervals


// ============================================================
// 018e4230
// ============================================================
// Function: FUN_018e4230
// Address: 018e4230
// Size: 1327 bytes
// Class: MUCTCandidateChord
// === MUCTCandidateChord properties ===
//                   _chordType
//                   _rootPitchClass
//                   _lowestNotePitchClass
//                   _satisfactionQuality
//                   _intervalDeviation
//                   _alienIntervals
//                   _omittedIntervals


void FUN_018e4230(void)

{
  uint uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  uint64_t uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(*this_ptr + 0xc);
  if (1 < (int)uVar1) {
    plVar4 = *(int64_t **)(*this_ptr + 0x10);
    if (*(int *)(*plVar4 + 0x18) != unaff_ESI) {
      uVar5 = 1;
      do {
        if (*(int *)(plVar4[uVar5] + 0x18) == unaff_ESI) goto LAB_018e46e9;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    plVar4 = (int64_t *)**(int64_t **)(*(int64_t *)(*(int64_t *)(*plVar4 + 0x10) + 0x18) + 0x10)
    ;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = g_027c7de0;
    if (g_027c7de0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar2 == '\0') {
      plVar4 = (int64_t *)
               **(int64_t **)
                 (*(int64_t *)(*(int64_t *)(**(int64_t **)(*this_ptr + 0x10) + 0x10) + 0x18) +
                 0x10);
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_027df400;
      if (g_027df400 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar4 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar2 == '\0') {
        plVar4 = (int64_t *)
                 **(int64_t **)
                   (*(int64_t *)(*(int64_t *)(**(int64_t **)(*this_ptr + 0x10) + 0x10) + 0x18) +
                   0x10);
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = g_02781710;
        if (g_02781710 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar4 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((cVar2 != '\0') && (lVar3 = *this_ptr, 1 < *(int *)(lVar3 + 0xc))) {
          uVar5 = 1;
          do {
            plVar4 = (int64_t *)
                     **(int64_t **)
                       (*(int64_t *)
                         (*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = g_027c7dd8;
            if (g_027c7dd8 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(int64_t **)(*this_ptr + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
              if ((iVar6 != 7) && (iVar6 != 4)) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *this_ptr;
          } while ((int64_t)uVar5 < (int64_t)*(int *)(lVar3 + 0xc));
        }
      }
      else {
        lVar3 = *this_ptr;
        if (1 < *(int *)(lVar3 + 0xc)) {
          uVar5 = 1;
          do {
            plVar4 = (int64_t *)
                     **(int64_t **)
                       (*(int64_t *)
                         (*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = g_027c7de0;
            if (g_027c7de0 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(int64_t **)(*this_ptr + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc !=
                  10) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *this_ptr;
          } while ((int64_t)uVar5 < (int64_t)*(int *)(lVar3 + 0xc));
        }
      }
    }
    else {
      lVar3 = *this_ptr;
      if (1 < *(int *)(lVar3 + 0xc)) {
        uVar5 = 1;
        do {
          plVar4 = (int64_t *)
                   **(int64_t **)
                     (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar5 * 8) + 0x10)
                       + 0x18) + 0x10);
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          lVar3 = g_027df400;
          if (g_027df400 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (cVar2 != '\0') {
            plVar4 = *(int64_t **)(*this_ptr + 0x10);
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
          lVar3 = *this_ptr;
        } while ((int64_t)uVar5 < (int64_t)*(int *)(lVar3 + 0xc));
      }
    }
  }
  return;
}



// ============================================================
// 018e4ec0
// ============================================================
// Function: FUN_018e4ec0
// Address: 018e4ec0
// Size: 973 bytes
// Class: MUCTCandidateChord
// String references:
//   "MUCTCandidateChord"
// === MUCTCandidateChord properties ===
//                   _chordType
//                   _rootPitchClass
//                   _lowestNotePitchClass
//                   _satisfactionQuality
//                   _intervalDeviation
//                   _alienIntervals
//                   _omittedIntervals


void FUN_018e4ec0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02614f50;
  FUN_018e52f0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e5570();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e56e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e5850();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027dfa7b == '\0') {
    FUN_018e59c0();
    FUN_00e87980();
  }
  FUN_018e5b30();
  FUN_018e5db0();
  return;
}

