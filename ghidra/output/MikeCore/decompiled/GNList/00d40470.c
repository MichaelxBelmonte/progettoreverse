// Function: FUN_00d40470
// Address: 00d40470
// Size: 582 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d40500) */
/* WARNING: Removing unreachable block (ram,0x00d40509) */

void FUN_00d40470(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_00d3e3f0(&local_50,&local_60,param_4);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    FUN_00da5ad0();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != lVar1) {
      if (param_3 == 1) {
        local_38 = '\0';
        local_40 = lVar2;
        FUN_00e325c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d4069a;
      }
      if (param_3 == 3) goto LAB_00d4069a;
    }
    if (*(int *)(unaff_RDI + 0x40) != 0) {
      if (param_3 == 3) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x368))();
        FUN_00d40820();
        (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
      }
      else if (param_3 == 1) {
        do {
          FUN_00d402b0();
          if (local_38 == '\0') {
            if (local_40 == 0) goto LAB_00d40686;
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == 0) goto LAB_00d40686;
          FUN_00d40c80();
          FUN_00d50b20();
        } while( true );
      }
    }
  }
LAB_00d4069a:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00d40686:
  FUN_00d40c80();
  goto LAB_00d4069a;
}


