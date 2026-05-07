// Function: FUN_00763bc0
// Address: 00763bc0
// Size: 709 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x00763c1e) */
/* WARNING: Removing unreachable block (ram,0x00763c2a) */

void FUN_00763bc0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  bool bVar3;
  longlong *local_b8;
  char local_b0;
  longlong local_a0;
  char local_98;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x610))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_a0 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x5d8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          local_58 = local_40;
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00763d10;
        }
      }
      else {
        local_58 = local_40;
        if (local_40 != 0) {
LAB_00763d10:
          (**(code **)(*unaff_RDI + 0x468))();
          if (local_40 == 0) {
            bVar3 = false;
          }
          else {
            (**(code **)(*unaff_RDI + 0x468))();
            (**(code **)(*local_b8 + 0x368))();
            bVar3 = local_68 != (longlong *)0x0;
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3) {
            (**(code **)(*unaff_RDI + 0x468))();
            (**(code **)(*local_68 + 0x390))();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            local_70 = '\0';
            local_78 = plVar1;
            FUN_0064e1c0(param_1,&local_78);
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(local_a0 + 0xc));
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}


