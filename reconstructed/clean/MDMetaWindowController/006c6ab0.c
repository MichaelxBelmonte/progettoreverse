// Function: FUN_006c6ab0
// Address: 006c6ab0
// Size: 735 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_006c6ab0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  bool bVar5;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_003b6390();
  if ((char)this_ptr[0x31] != '\0') {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      FUN_01e42030();
      if (local_40[0] == '\0') {
        if (local_48 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_48 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
      local_38[0] = '\0';
      do {
        (**(code **)(*this_ptr + 0x370))();
        if (local_48 == this_ptr) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_006c6bd7;
          }
        }
        else {
          this_ptr = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar3 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar3 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_006c6bd7:
            local_38[0] = '\x01';
            pcVar3 = local_40;
          }
          *pcVar3 = '\0';
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          g_026e0ab8 = FUN_00015ff0();
          g_026e0aa0 = "MDMetaWindowController";
          g_026e0aa8 = 0x198;
          g_026e0ab0 = FUN_0006dea0;
          g_026e0ac0 = 0;
          ram_00000000026e0ac8 = 0;
          g_026e0ad0 = 0;
          g_026e0b48 = 0;
          ram_00000000026e0b50 = 0;
          g_026e0b58 = 0;
          g_026e0b5a = 1;
          g_026e0ad8 = 0;
          ram_00000000026e0ae0 = 0;
          g_026e0ae8 = 0;
          ram_00000000026e0af0 = 0;
          g_026e0af8 = 0;
          ram_00000000026e0b00 = 0;
          g_026e0b08 = 0;
          ram_00000000026e0b10 = 0;
          g_026e0b18 = 0;
          ram_00000000026e0b20 = 0;
          g_026e0b28 = 0;
          ram_00000000026e0b30 = 0;
          g_026e0b38 = 0;
          ram_00000000026e0b40 = 0;
          g_026e0b63 = 0;
          g_026e0b5b = 0;
          ___cxa_guard_release();
        }
        plVar4 = &g_02802688;
        if (this_ptr != (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0x360))();
          cVar1 = FUN_00e85ea0();
          plVar4 = (int64_t *)&stack0xffffffffffffffb0;
          if (cVar1 == '\0') {
            plVar4 = &g_02802688;
          }
        }
        if (*plVar4 != 0) {
          if ((local_38[0] == '\0') && (this_ptr != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          bVar5 = this_ptr != (int64_t *)0x0;
          goto LAB_006c6d55;
        }
      } while (this_ptr != (int64_t *)0x0);
      this_ptr = (int64_t *)0x0;
      bVar5 = false;
LAB_006c6d55:
      FUN_00d50b20();
      if (this_ptr != (int64_t *)0x0) {
        FUN_0062d8e0();
      }
      FUN_00d50b20();
      if ((bVar5) && (this_ptr != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

