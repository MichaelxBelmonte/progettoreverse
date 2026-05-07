// Function: FUN_01e459c0
// Address: 01e459c0
// Size: 2374 bytes
// Class: GNTextView
// String references:
//   "GNTextView"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e459c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t *local_f8;
  char local_f0;
  int64_t local_c8;
  char local_c0;
  uint32_t local_68;
  int64_t *local_48;
  char local_40;
  
  if (*arg1 == 0) {
    return;
  }
  iVar9 = FUN_01d3a5a0();
  if (((iVar9 == 5) && (cVar7 = (**(code **)(*this_ptr + 0x750))(), cVar7 != '\0')) &&
     (cVar7 = FUN_01e45650(), cVar7 == '\0')) {
    (**(code **)(*this_ptr + 0x740))();
  }
  iVar9 = FUN_01d3a5a0();
  if (iVar9 == 1) {
    iVar9 = FUN_01d3b630();
    if (iVar9 == 2) {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0x6f8))();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01e45be0;
        }
      }
      else if (local_48 != (int64_t *)0x0) {
LAB_01e45be0:
        FUN_00d50b00();
        FUN_01d62b10();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b00();
        FUN_01d5ef60(uVar11,g_0241f410);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01d62b80();
        FUN_00d50b20();
        return;
      }
    }
    cVar7 = (**(code **)(*this_ptr + 0x8e8))();
    if ((cVar7 != '\0') &&
       ((((iVar9 = FUN_01d3a5a0(), iVar9 == 1 && (iVar9 = FUN_01d3b630(), iVar9 == 1)) ||
         ((iVar9 = FUN_01d3a5a0(), iVar9 == 6 && (iVar9 = FUN_01d3b630(), iVar9 == 1)))) ||
        (iVar9 = FUN_01d3a5a0(), iVar9 == 5)))) {
      FUN_01d3abf0();
      local_68 = FUN_01e466c0();
      FUN_01d3b590();
      plVar1 = (int64_t *)*arg1;
      lVar4 = arg1[1];
      if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar11 = FUN_01d3b620();
      (**(code **)(*this_ptr + 0x8f0))(local_68,uVar11);
      FUN_01d3a560();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == plVar1) {
LAB_01e460e0:
        do {
          do {
            (**(code **)(*this_ptr + 0x658))();
            plVar2 = (int64_t *)*arg1;
            if (plVar2 == local_48) {
              if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
                if (local_40 != '\0') goto LAB_01e46133;
                FUN_00d50b00();
                goto LAB_01e46168;
              }
LAB_01e4616e:
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar5 = arg1[1];
              if (local_40 == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (int64_t)local_48;
                if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01e46168:
                *(void*)(arg1 + 1) = 1;
                goto LAB_01e4616e;
              }
              *arg1 = (int64_t)local_48;
              if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01e46133:
              *(void*)(arg1 + 1) = 1;
            }
            if (*arg1 == 0) {
LAB_01e4618d:
              (**(code **)(*this_ptr + 0x900))(local_68);
              goto LAB_01e46234;
            }
            plVar6 = (int64_t *)this_ptr[6];
            plVar2 = this_ptr;
            while (plVar3 = plVar6, plVar3 != (int64_t *)0x0) {
              plVar6 = (int64_t *)plVar3[6];
              plVar2 = plVar3;
              if ((int64_t *)plVar3[6] == plVar3) {
                plVar6 = plVar3;
              }
            }
            cVar7 = (**(code **)(*plVar2 + 0x4b8))();
            if (cVar7 == '\0') goto LAB_01e4618d;
            FUN_00d50b00();
            FUN_00d50b20();
            uVar11 = FUN_01d3abf0();
            uVar12 = FUN_01e466c0();
            if (*arg1 == 0) goto LAB_01e4621e;
            iVar9 = FUN_01d3a5a0();
            if (iVar9 == 5) {
              FUN_01d3b590();
              (**(code **)(*this_ptr + 0x8f8))(uVar12,local_68);
              local_68 = FUN_01e466c0(uVar11);
              goto LAB_01e460e0;
            }
            if (*arg1 == 0) goto LAB_01e4621e;
            iVar9 = FUN_01d3a5a0();
            local_68 = uVar12;
          } while (iVar9 == 4);
          if (*arg1 == 0) goto LAB_01e4621e;
          iVar9 = FUN_01d3a5a0();
        } while (iVar9 != 6);
        if (*arg1 != 0) {
          FUN_01d3b590();
        }
LAB_01e4621e:
        (**(code **)(*this_ptr + 0x900))(uVar12);
      }
      else {
        (**(code **)(*this_ptr + 0x900))(local_68);
      }
LAB_01e46234:
      if ((char)lVar4 == '\0') {
        return;
      }
      if (plVar1 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    goto LAB_01e45f25;
  }
  iVar9 = FUN_01d3a5a0();
  if ((iVar9 == 2) || (iVar9 = FUN_01d3a5a0(), iVar9 == 8)) {
    FUN_01d3b5d0();
    lVar4 = g_027f3310;
    if (g_027f3310 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_48 + 0x50))();
    if (cVar7 == '\0') {
      FUN_01d3b5d0();
      local_c8 = g_027f3cb8;
      if (g_027f3cb8 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      cVar8 = (**(code **)(*local_f8 + 0x50))();
      if (cVar8 != '\0') goto LAB_01e45b31;
      cVar8 = '\0';
LAB_01e45d84:
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
LAB_01e45d95:
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_01e45b31:
      cVar8 = (**(code **)(*this_ptr + 0x878))();
      if (cVar8 == '\0') {
        cVar8 = '\0';
      }
      else {
        if ((g_026f3380 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_027fadc8 = FUN_0006d940();
          g_027fadb0 = "GNTextView";
          g_027fadb8 = 0x1d8;
          g_027fadc0 = FUN_001fc360;
          g_027fadd0 = 0;
          ram_00000000027fadd8 = 0;
          g_027fade0 = 0;
          ram_00000000027fade8 = 0;
          g_027fadf0 = 0;
          ram_00000000027fadf8 = 0;
          g_027fae00 = 0;
          ram_00000000027fae08 = 0;
          g_027fae10 = 0;
          ram_00000000027fae18 = 0;
          g_027fae20 = 0;
          ram_00000000027fae28 = 0;
          g_027fae30 = 0;
          ram_00000000027fae38 = 0;
          g_027fae40 = 0;
          ram_00000000027fae48 = 0;
          g_027fae50 = 0;
          ram_00000000027fae58 = 0;
          g_027fae60 = 0;
          ram_00000000027fae68 = 0;
          g_027fae70 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*this_ptr + 0x360))();
        cVar8 = FUN_00e85ea0();
        plVar1 = this_ptr;
        if (cVar8 == '\0') {
          plVar1 = g_02802688;
        }
        if (plVar1 == (int64_t *)0x0) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = FUN_01e14970();
        }
      }
      if (cVar7 == '\0') {
        if (local_c0 != '\0') goto LAB_01e45d84;
        goto LAB_01e45d95;
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar8 != '\0') {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = FUN_01d3b590();
      if ((uVar10 & 4) == 0) {
        (**(code **)(*this_ptr + 0x8c8))();
      }
      else {
        (**(code **)(*this_ptr + 0x8d0))();
      }
      FUN_00d50b20();
      return;
    }
  }
  iVar9 = FUN_01d3a5a0();
  if ((iVar9 == 2) || (iVar9 = FUN_01d3a5a0(), iVar9 == 8)) {
    FUN_01d3b5d0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    uVar11 = FUN_01d3b590();
    cVar7 = (**(code **)(*this_ptr + 0x438))(*this_ptr,uVar11);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar9 = FUN_01d3a5a0();
    if (iVar9 != 4) goto LAB_01e45f25;
    FUN_00d8ede0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    uVar11 = FUN_01d3b590();
    cVar7 = (**(code **)(*this_ptr + 0x438))(*this_ptr,uVar11);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (cVar7 != '\0') {
    return;
  }
LAB_01e45f25:
  FUN_01d82ea0();
  return;
}

