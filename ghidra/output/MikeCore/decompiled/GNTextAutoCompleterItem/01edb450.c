// Function: FUN_01edb450
// Address: 01edb450
// Size: 1074 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01edb86b) */
/* WARNING: Removing unreachable block (ram,0x01edb878) */

ulonglong FUN_01edb450(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  uint3 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar6 = DAT_027fe7c0;
  if (DAT_027fe7c0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0') {
    FUN_01cae990();
    lVar6 = DAT_027fe7c8;
    if (DAT_027fe7c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar6 = DAT_027fe7d0;
      if (DAT_027fe7d0 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar6 = DAT_027fe7d8;
        if (DAT_027fe7d8 != 0) {
          FUN_00d50b00();
        }
        uVar4 = (**(code **)(*local_40 + 0x50))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar4 == '\0') {
          FUN_01cae990();
          lVar6 = DAT_027fe7b8;
          if (DAT_027fe7b8 != 0) {
            FUN_00d50b00();
          }
          uVar4 = (**(code **)(*local_40 + 0x50))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar4 != '\0') {
            if (param_2 == '\0') {
              return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
            }
            uVar5 = *(uint *)((longlong)unaff_RDI + 0x2cc);
            lVar6 = (longlong)(int)uVar5;
            if ((lVar6 != -1) &&
               (*(char *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 4 + lVar6 * 8) != '\0')) {
              lVar1 = unaff_RDI[0x57];
              bVar2 = (int)uVar5 < *(int *)(lVar1 + 0xc);
              if (*(char *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 5 + lVar6 * 8) == '\0') {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed2f70();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed3c60();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            *(undefined4 *)((longlong)unaff_RDI + 0x2cc) = 0xffffffff;
            FUN_01e1e360();
            if (unaff_RDI[0x5b] != 0) {
              unaff_RDI[0x5b] = 0;
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_01dde120();
          return (ulonglong)uVar5;
        }
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14c;
      }
      else {
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14b;
      }
    }
    else {
      uVar3 = (uint3)((uint)uVar4 >> 8);
      lVar6 = 0x14a;
    }
  }
  else {
    uVar3 = (uint3)((uint)uVar4 >> 8);
    lVar6 = 0x149;
  }
  if (param_2 != '\0') {
    (**(code **)(*unaff_RDI + lVar6 * 8))();
  }
  return CONCAT71((uint7)uVar3,1);
}


