// Function: FUN_01f1fc80
// Address: 01f1fc80
// Size: 631 bytes
// Class: Unknown
// String references:
//   "doMenuAction:"
//   "undo:"
//   "redo:"
//   "cut:"
//   "copy:"
//   "paste:"
//   "delete:"
//   "selectAll:"

void* FUN_01f1fc80(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void**ppuVar4;
  int64_t *this_ptr;
  
  lVar2 = g_027e7ca0;
  plVar1 = (int64_t *)*this_ptr;
  if (plVar1 == (int64_t *)0x0) {
    ppuVar4 = &PTR_s_doMenuAction__026c9de0;
  }
  else {
    if (g_027e7ca0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027f2a20;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*this_ptr;
      if (g_027f2a20 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_026de8c8;
      if (cVar3 == '\0') {
        plVar1 = (int64_t *)*this_ptr;
        if (g_026de8c8 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_02725a10;
        if (cVar3 == '\0') {
          plVar1 = (int64_t *)*this_ptr;
          if (g_02725a10 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar1 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = g_026de900;
          if (cVar3 == '\0') {
            plVar1 = (int64_t *)*this_ptr;
            if (g_026de900 != 0) {
              FUN_00d50b00();
            }
            cVar3 = (**(code **)(*plVar1 + 0x50))();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar2 = g_026de880;
            if (cVar3 == '\0') {
              plVar1 = (int64_t *)*this_ptr;
              if (g_026de880 != 0) {
                FUN_00d50b00();
              }
              cVar3 = (**(code **)(*plVar1 + 0x50))();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              lVar2 = g_026de890;
              if (cVar3 == '\0') {
                plVar1 = (int64_t *)*this_ptr;
                if (g_026de890 != 0) {
                  FUN_00d50b00();
                }
                cVar3 = (**(code **)(*plVar1 + 0x50))();
                if (lVar2 != 0) {
                  FUN_00d50b20();
                }
                ppuVar4 = &PTR_s_doMenuAction__026c9de0;
                if (cVar3 != '\0') {
                  ppuVar4 = &PTR_s_redo__026c9e18;
                }
              }
              else {
                ppuVar4 = &PTR_s_undo__026c9e10;
              }
            }
            else {
              ppuVar4 = &PTR_s_selectAll__026c9e08;
            }
          }
          else {
            ppuVar4 = &PTR_s_delete__026c9e00;
          }
        }
        else {
          ppuVar4 = &PTR_s_paste__026c9df8;
        }
      }
      else {
        ppuVar4 = &PTR_s_copy__026c9df0;
      }
    }
    else {
      ppuVar4 = &PTR_s_cut__026c9de8;
    }
  }
  return *ppuVar4;
}

