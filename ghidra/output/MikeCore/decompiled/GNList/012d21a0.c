// Function: FUN_012d21a0
// Address: 012d21a0
// Size: 747 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_012d21a0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (*unaff_RSI != 0) {
    local_68 = '\0';
    local_60 = *(longlong *)(*unaff_RSI + 0x10);
    local_58 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      do {
        local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (longlong)local_58 * 8);
        FUN_012d5b70((longlong)local_58,&local_70);
        plVar1 = local_48;
        local_38[0] = '\0';
        local_50 = local_48;
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0] != '\0';
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_026cd478 = FUN_00d4fe50();
          DAT_026cd460 = "GNList";
          _DAT_026cd468 = 0x20;
          _DAT_026cd470 = FUN_00018210;
          _DAT_026cd480 = 0;
          uRam00000000026cd488 = 0;
          _DAT_026cd490 = 0;
          _DAT_026cd508 = 0;
          uRam00000000026cd510 = 0;
          _DAT_026cd518 = 0;
          DAT_026cd51a = 6;
          _DAT_026cd498 = 0;
          uRam00000000026cd4a0 = 0;
          _DAT_026cd4a8 = 0;
          uRam00000000026cd4b0 = 0;
          _DAT_026cd4b8 = 0;
          uRam00000000026cd4c0 = 0;
          _DAT_026cd4c8 = 0;
          uRam00000000026cd4d0 = 0;
          _DAT_026cd4d8 = 0;
          uRam00000000026cd4e0 = 0;
          _DAT_026cd4e8 = 0;
          uRam00000000026cd4f0 = 0;
          _DAT_026cd4f8 = 0;
          uRam00000000026cd500 = 0;
          DAT_026cd523 = 0;
          _DAT_026cd51b = 0;
          ___cxa_guard_release();
        }
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_50;
          if (cVar2 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = local_50;
        if (*pplVar6 == (longlong *)0x0) {
          FUN_010f2dd0();
          pplVar6 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_50;
            if (cVar2 == '\0') {
              pplVar6 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar6 != (longlong *)0x0) {
            local_48 = plVar1;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_50;
          local_40[0] = '\0';
          FUN_00d214d0(pplVar6,*(undefined4 *)((longlong)puVar4 + 0xc));
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(int *)(local_60 + 0xc));
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


