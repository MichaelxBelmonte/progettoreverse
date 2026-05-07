// Function: FUN_01c51220
// Address: 01c51220
// Size: 656 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c51220(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x1a8) == *unaff_RSI) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    *(undefined8 *)(unaff_RDI + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  lVar3 = *(longlong *)(unaff_RDI + 0x1a8);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x1a8) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(longlong *)(unaff_RDI + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c51304;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x148);
        *(longlong *)(unaff_RDI + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c51304:
        *(longlong *)(unaff_RDI + 0x148) = lVar3;
      }
      param_1 = (pthread_key_t)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (*unaff_RSI != 0) {
      if (*(longlong *)(unaff_RDI + 0x198) != 0) {
        *(undefined8 *)(unaff_RDI + 0x198) = 0;
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x1a0) != 0) {
        *(undefined8 *)(unaff_RDI + 0x1a0) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c51471;
    }
  }
  FUN_01c51000();
LAB_01c51471:
  FUN_01c4df60();
  FUN_016bf0c0();
  *(undefined1 *)(unaff_RDI + 0x218) = 0;
  FUN_01c4e390();
  return;
}


