// Function: FUN_0043ed80
// Address: 0043ed80
// Size: 504 bytes
// Class: MDMetaWindowController

void FUN_0043ed80(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_30;
  char local_28;
  
  cVar1 = FUN_0043e2f0();
  lVar2 = g_028085b0;
  if ((cVar1 == '\0') || (*(char *)(arg1 + 0x139) == '\0')) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028085b0 == 0) || (g_028085b9 == '\0')) {
    FUN_00e8cb50();
    lVar2 = g_027058f8;
    if (g_028085b0 == 0) {
      if (g_027058f8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_30 != 0) {
        FUN_01d20ca0(g_023b2d60);
        lVar2 = g_028085b0;
        if (g_028085b0 != local_30) {
          if (local_28 == '\0') {
            if (local_30 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_30;
            }
          }
          else {
            local_28 = '\0';
            lVar2 = local_30;
          }
          bVar3 = g_028085b0 != 0;
          g_028085b0 = lVar2;
          if (bVar3) {
            FUN_00d50b20();
            lVar2 = local_30;
          }
        }
        if ((lVar2 != 0) && (g_028085b8 == '\0')) {
          g_028085b8 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_30;
        }
        if ((local_28 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      g_028085b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028085b9 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = g_028085b0;
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_0043ef57;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0043ef57:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

