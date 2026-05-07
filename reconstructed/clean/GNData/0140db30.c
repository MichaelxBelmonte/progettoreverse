// Function: FUN_0140db30
// Address: 0140db30
// Size: 1199 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_0140db30(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  
  lVar1 = g_02704060;
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    return;
  }
  if (g_02704060 != 0) {
    FUN_00d50b00();
  }
  FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02781708;
  if (g_02781708 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027816f0;
  if (cVar2 != '\0') {
    uVar3 = 2;
    goto LAB_0140df74;
  }
  if (g_027816f0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02781700;
  if (cVar2 != '\0') {
    uVar3 = 1;
    goto LAB_0140df74;
  }
  if (g_02781700 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02781710;
  if (cVar2 != '\0') {
    uVar3 = 3;
    goto LAB_0140df74;
  }
  if (g_02781710 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027cc8a0;
  if (cVar2 != '\0') {
    uVar3 = 5;
    goto LAB_0140df74;
  }
  if (g_027cc8a0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_0140cda0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_02781720;
    if (cVar2 == '\0') {
      if (g_02781720 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_0140cda0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        lVar1 = *(int64_t *)(this_ptr + 0x80);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_0140cda0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_027cc890;
        if (cVar2 != '\0') {
          FUN_01715d40(param_1,6);
          uVar3 = 8;
          goto LAB_0140df74;
        }
        if (g_027cc890 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_0140cda0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          lVar1 = *(int64_t *)(this_ptr + 0x88);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_0140cda0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_02781738;
          if (cVar2 == '\0') {
            if (g_02781738 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_0140cda0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              lVar1 = *(int64_t *)(this_ptr + 0x90);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              cVar2 = FUN_0140cda0();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                return;
              }
              FUN_01715d40(param_1,0xc);
            }
            else {
              FUN_01715d40(param_1,0xc);
            }
          }
          else {
            FUN_01715d40(param_1,10);
          }
          goto LAB_0140df6f;
        }
        FUN_01715d40(param_1,10);
      }
      else {
        FUN_01715d40(param_1,8);
      }
      goto LAB_0140dd36;
    }
  }
  else {
LAB_0140dd36:
    if (*(char *)(this_ptr + 0x29) != '\0') {
      return;
    }
  }
LAB_0140df6f:
  uVar3 = 6;
LAB_0140df74:
  FUN_01715d40(param_1,uVar3);
  return;
}

