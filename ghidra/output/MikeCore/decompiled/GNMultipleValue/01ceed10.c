// Function: FUN_01ceed10
// Address: 01ceed10
// Size: 1015 bytes
// Class: GNMultipleValue


void FUN_01ceed10(void)

{
  longlong lVar1;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((longlong *)unaff_RDI[0x3a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceedce;
        }
        if (unaff_RDI[0x3a] != 0) {
          unaff_RDI[0x3a] = 0;
          goto LAB_01ceee0f;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceedce:
        lVar1 = unaff_RDI[0x3a];
        if (local_38 != lVar1) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          unaff_RDI[0x3a] = local_38;
          if (lVar1 != 0) {
LAB_01ceee0f:
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x620))();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((longlong *)unaff_RDI[0x3b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x3b] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x3b] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceef18;
        }
        if (unaff_RDI[0x3b] != 0) {
          unaff_RDI[0x3b] = 0;
          goto LAB_01ceef52;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceef18:
        lVar1 = unaff_RDI[0x3b];
        if (lVar1 != local_38) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          unaff_RDI[0x3b] = local_38;
          if (lVar1 != 0) {
LAB_01ceef52:
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*unaff_RDI + 0x620))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((longlong *)unaff_RDI[0x3c] == (longlong *)0x0) goto LAB_01cef0f2;
  (**(code **)(*(longlong *)unaff_RDI[0x3c] + 0x148))();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) goto LAB_01cef0f2;
  (**(code **)(*(longlong *)unaff_RDI[0x3c] + 0x148))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01cef05b;
    }
    if (unaff_RDI[0x3c] != 0) {
      unaff_RDI[0x3c] = 0;
      goto LAB_01cef095;
    }
  }
  else {
    local_30 = '\0';
LAB_01cef05b:
    lVar1 = unaff_RDI[0x3c];
    if (lVar1 != local_38) {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x3c] = local_38;
      if (lVar1 != 0) {
LAB_01cef095:
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01cef0f2:
  FUN_01e47520();
  return;
}


