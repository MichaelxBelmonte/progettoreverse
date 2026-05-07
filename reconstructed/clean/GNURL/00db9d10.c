// Function: FUN_00db9d10
// Address: 00db9d10
// Size: 1334 bytes
// Class: GNURL
// String references:
//   "GNURL::initWithStringValue: failed with string value:%@"

void FUN_00db9d10(void)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  short sVar4;
  int iVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  sVar4 = FUN_00d8cbc0();
  lVar2 = g_027837c0;
  if (sVar4 == 0x2f) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025795a8;
    (*g_025795c0)();
    puVar1 = *(void**)(this_ptr + 0x10);
    if (puVar1 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x10) = puVar6;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    sVar4 = FUN_00d8cbc0();
    lVar2 = g_027837b8;
    if (sVar4 == 0x2f) {
      if (g_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027d3890;
      if (g_027d3890 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027837c0;
      if (g_027837c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027837c8;
      if (g_027837c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
  }
  else {
    if (g_027837c0 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d90650();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00d8c7a0();
      if (2 < iVar5) {
        FUN_00d8e3d0();
        lVar2 = g_027837d0;
        if (g_027837d0 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d92590();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_025795a8;
          (*g_025795c0)();
          puVar1 = *(void**)(this_ptr + 0x10);
          if (puVar1 == puVar6) {
            FUN_00d50b20();
          }
          else {
            *(void**)(this_ptr + 0x10) = puVar6;
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          lVar2 = g_027837d8;
          if (g_027837d8 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = g_027837c0;
          if (g_027837c0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d8dbf0();
          return;
        }
      }
      lVar2 = g_027837e0;
      if (g_027837e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *arg1;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = *arg1;
      lVar3 = *(int64_t *)(this_ptr + 0x10);
      if (lVar3 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x10) = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

