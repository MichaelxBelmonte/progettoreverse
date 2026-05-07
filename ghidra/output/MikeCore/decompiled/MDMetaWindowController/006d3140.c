// Function: FUN_006d3140
// Address: 006d3140
// Size: 988 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x006d341e) */
/* WARNING: Removing unreachable block (ram,0x006d342a) */
/* WARNING: Removing unreachable block (ram,0x006d348c) */
/* WARNING: Removing unreachable block (ram,0x006d3495) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006d3140(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *local_70;
  char local_68;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_006d3710();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_006d3188;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_006d3188:
    FUN_006d3ba0();
    if ((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    uVar6 = (undefined7)((ulonglong)local_48 >> 8);
    if ((*(int *)((longlong)local_48 + 0xc) == 0) || (param_2 == '\0')) {
      uVar5 = CONCAT71(uVar6,*(int *)((longlong)local_48 + 0xc) != 0);
LAB_006d34d3:
      FUN_00d50b20();
    }
    else {
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38[0] = '\0';
      plVar7 = unaff_RDI;
      do {
        (**(code **)(*plVar7 + 0x370))();
        if (local_48 == plVar7) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_006d3247;
          }
        }
        else {
          plVar7 = local_48;
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
LAB_006d3247:
            local_38[0] = '\x01';
            pcVar3 = local_40;
          }
          *pcVar3 = '\0';
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_026e0ab8 = FUN_00015ff0();
          _DAT_026e0aa0 = "MDMetaWindowController";
          _DAT_026e0aa8 = 0x198;
          _DAT_026e0ab0 = FUN_0006dea0;
          _DAT_026e0ac0 = 0;
          uRam00000000026e0ac8 = 0;
          _DAT_026e0ad0 = 0;
          _DAT_026e0b48 = 0;
          uRam00000000026e0b50 = 0;
          _DAT_026e0b58 = 0;
          DAT_026e0b5a = 1;
          _DAT_026e0ad8 = 0;
          uRam00000000026e0ae0 = 0;
          _DAT_026e0ae8 = 0;
          uRam00000000026e0af0 = 0;
          _DAT_026e0af8 = 0;
          uRam00000000026e0b00 = 0;
          _DAT_026e0b08 = 0;
          uRam00000000026e0b10 = 0;
          _DAT_026e0b18 = 0;
          uRam00000000026e0b20 = 0;
          _DAT_026e0b28 = 0;
          uRam00000000026e0b30 = 0;
          _DAT_026e0b38 = 0;
          uRam00000000026e0b40 = 0;
          DAT_026e0b63 = 0;
          _DAT_026e0b5b = 0;
          ___cxa_guard_release();
        }
        plVar4 = &DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar1 = FUN_00e85ea0();
          plVar4 = (longlong *)&stack0xffffffffffffffa0;
          if (cVar1 == '\0') {
            plVar4 = &DAT_02802688;
          }
        }
        if (*plVar4 != 0) {
          if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          if (unaff_RDI == (longlong *)0x0) goto LAB_006d33eb;
          goto LAB_006d33e3;
        }
      } while (plVar7 != (longlong *)0x0);
      plVar7 = (longlong *)0x0;
      if (unaff_RDI != (longlong *)0x0) {
LAB_006d33e3:
        FUN_00d50b20();
      }
LAB_006d33eb:
      FUN_000ba510();
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      uVar8 = FUN_006d30c0();
      local_70 = local_48;
      local_68 = '\0';
      FUN_00782ec0(uVar8,&local_70);
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71(uVar6,1);
      if (local_48 != (longlong *)0x0) goto LAB_006d34d3;
    }
    FUN_00d50b20();
    goto LAB_006d34e0;
  }
  uVar5 = 0;
LAB_006d34e0:
  return uVar5 & 0xffffffff;
}


