// Function: FUN_00543a00
// Address: 00543a00
// Size: 909 bytes
// Class: MURenderSliceTimeContext
// === MURenderSliceTimeContext properties ===
//   MUTimeContextCreationType _type


void FUN_00543a00(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  if (*(char *)(arg1 + 0x188) == '\0') {
    if ((g_0280a1f8 == 0) || (lVar3 = g_0280a1f8, g_0280a201 == '\0')) {
      FUN_00e8cb50();
      lVar3 = g_0270ca80;
      if (g_0280a1f8 == 0) {
        if (g_0270ca80 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d20ca0(g_023b1900);
        lVar2 = g_0280a1f8;
        if (g_0280a1f8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = g_0280a1f8 != 0;
          g_0280a1f8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (g_0280a200 == '\0')) {
          g_0280a200 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        g_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = g_0280a1f8;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00543d72;
    }
LAB_00543a61:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if ((g_0280a1e8 != 0) && (lVar3 = g_0280a1e8, g_0280a1f1 != '\0')) goto LAB_00543a61;
    FUN_00e8cb50();
    lVar3 = g_027ebc10;
    if (g_0280a1e8 == 0) {
      if (g_027ebc10 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_0280a1e8;
      if (g_0280a1e8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = g_0280a1e8 != 0;
        g_0280a1e8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (g_0280a1f0 == '\0')) {
        g_0280a1f0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = g_0280a1e8;
    *(void*)(this_ptr + 1) = 0;
joined_r0x00543d72:
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_00543c44;
    }
  }
  FUN_00d50b00();
LAB_00543c44:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

