// Function: FUN_01ee61e0
// Address: 01ee61e0
// Size: 586 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee61e0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  double dVar4;
  int64_t local_38;
  char local_30;
  
  lVar3 = g_028ba608;
  if ((g_028ba608 == 0) || (g_028ba611 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba608 == 0) {
      _objc_alloc();
      (*PTR__objc_msgSend_024a9998)();
      dVar4 = (double)(*PTR__objc_msgSend_024a9998)();
      (*PTR__objc_msgSend_024a9998)((double)(float)dVar4);
      (*PTR__objc_msgSend_024a9998)();
      FUN_00e1ccf0();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      lVar3 = g_027fecc0;
      if (g_027fecc0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(g_023908ec,0);
      lVar2 = g_028ba608;
      if (g_028ba608 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar2 = local_38;
        }
        bVar1 = g_028ba608 != 0;
        g_028ba608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_38;
        }
      }
      if ((lVar2 != 0) && (g_028ba610 == '\0')) {
        g_028ba610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_38;
      }
      if ((local_30 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      (*PTR__objc_release_024a99a0)();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      g_028ba611 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba611 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = g_028ba608;
    *(void*)(this_ptr + 1) = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_01ee6405;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ee6405:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

