// Function: FUN_002d9d70
// Address: 002d9d70
// Size: 1077 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_002d9d70(void)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_58 = '\0';
  plVar6 = this_ptr;
  do {
    (**(code **)(*plVar6 + 0x370))();
    plVar5 = local_48;
    if (local_48 == plVar6) {
      if (((local_58 == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_58 = '\x01';
        goto LAB_002d9e07;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_58 == '\0') {
          pcVar4 = &local_58;
        }
        else {
          FUN_00d50b20();
          pcVar4 = &local_58;
        }
      }
      else {
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
        local_58 = '\x01';
        plVar6 = plVar5;
LAB_002d9e07:
        local_58 = '\x01';
        pcVar4 = local_40;
        plVar5 = plVar6;
      }
      *pcVar4 = '\0';
      plVar6 = plVar5;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    plVar5 = &g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_58 == '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar5 = plVar6;
      if (this_ptr == (int64_t *)0x0) goto LAB_002d9f94;
      goto LAB_002d9f8c;
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      if (this_ptr != (int64_t *)0x0) {
LAB_002d9f8c:
        FUN_00d50b20();
      }
LAB_002d9f94:
      if (plVar5 != (int64_t *)0x0) {
        FUN_00643590();
        iVar3 = *(int *)((int64_t)local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (0 < iVar3) {
          FUN_00643590();
          FUN_00d23310();
          plVar5 = local_48;
          local_58 = local_40[0];
          pcVar4 = &local_58;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          cVar1 = FUN_00212c70();
          if ((local_58 != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') {
            FUN_00643590();
            FUN_00d23310();
            pcVar4 = local_40;
            if (local_40[0] == '\0') {
              pcVar4 = local_38;
            }
            local_38[0] = local_40[0];
            *pcVar4 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0021a630();
            uVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                                *plVar6))();
            *(void*)(this_ptr + 0x16) = uVar2;
            if ((local_60 != '\0') && (plVar6 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00643590();
            FUN_00d23310();
            pcVar4 = local_40;
            if (local_40[0] == '\0') {
              pcVar4 = local_38;
            }
            local_38[0] = local_40[0];
            *pcVar4 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0021cc50();
            uVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                                *plVar6))();
            *(void*)(this_ptr + 0x16) = uVar2;
            if ((local_60 != '\0') && (plVar6 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}

