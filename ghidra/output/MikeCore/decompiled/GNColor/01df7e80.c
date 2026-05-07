// Function: FUN_01df7e80
// Address: 01df7e80
// Size: 769 bytes
// Class: GNColor


void FUN_01df7e80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_027edfd0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027edfd0;
  if (*param_1 == 0) {
    if (lVar2 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    FUN_01d25cb0();
  }
  else {
    if (DAT_027edfd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccab60();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (lVar2 == 0) {
        return;
      }
    }
    else {
      if (lVar2 == 0) {
        local_50 = lVar3;
        local_48 = '\0';
        (**(code **)(*(longlong *)*param_1 + 0x88))();
        lVar1 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            *unaff_RDI = 0;
            *(undefined1 *)(unaff_RDI + 1) = 1;
          }
          else {
            FUN_00d50b00();
            *unaff_RDI = lVar1;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        return;
      }
      local_70 = *param_1;
      local_68 = '\0';
      local_60 = lVar3;
      local_58 = '\0';
      FUN_01d26fb0(&local_60,&local_70);
      lVar1 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          *unaff_RDI = 0;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *unaff_RDI = lVar1;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


