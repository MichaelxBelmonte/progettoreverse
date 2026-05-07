// Function: FUN_01b0a620
// Address: 01b0a620
// Size: 544 bytes
// Class: GNEvent
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void FUN_01b0a620(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_028b3fb0;
  if ((g_028b3fb0 == 0) || (g_028b3fb9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b3fb0 == 0) {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar3 = g_028b3fb0;
      if ((g_028b3fb0 != local_40) && (g_028b3fb0 = local_40, lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (g_028b3fb8 == '\0') {
          g_028b3fb8 = '\x01';
          FUN_00e8cb90();
        }
        if (local_40 != 0 && lVar3 == local_40) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      lVar3 = 2;
      do {
        lVar2 = g_028b3fb0;
        iVar1 = *(int *)(g_028b3fb0 + 0x18);
        FUN_00c8e340();
        *(int *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar1) = (int)lVar3;
        lVar2 = *(int64_t *)(local_40 + 0x10);
        lVar3 = (int64_t)(int)lVar3;
        lVar4 = lVar3;
        do {
          *(void*)(lVar2 + lVar4) = 1;
          lVar4 = lVar4 + lVar3;
        } while (lVar4 < 1000);
        while (*(char *)(*(int64_t *)(local_40 + 0x10) + lVar3) != '\0') {
          lVar3 = lVar3 + 1;
          if (lVar3 == 1000) goto LAB_01b0a7ed;
        }
      } while ((int)lVar3 < 1000);
LAB_01b0a7ed:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      g_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = g_028b3fb0;
    *(void*)(this_ptr + 1) = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_01b0a820;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01b0a820:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

