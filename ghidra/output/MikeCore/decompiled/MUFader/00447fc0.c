// Function: FUN_00447fc0
// Address: 00447fc0
// Size: 1397 bytes
// Class: MUFader
// String references:
//   "MUFader"


/* WARNING: Removing unreachable block (ram,0x00448413) */
/* WARNING: Removing unreachable block (ram,0x0044841c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447fc0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *plVar7;
  char local_60;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\0';
  plVar5 = unaff_RDI;
  plVar7 = unaff_RDI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_40;
    if (local_40 == plVar5) {
      if (((local_50 == '\0') && (local_40 != (longlong *)0x0)) &&
         (plVar4 = plVar5, local_38[0] != '\0')) goto LAB_00448057;
    }
    else {
      plVar7 = plVar4;
      if (local_38[0] == '\0') {
        if (local_50 == '\0') {
          pcVar3 = &local_50;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &local_50;
        }
      }
      else {
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
LAB_00448057:
        local_50 = '\x01';
        pcVar3 = local_38;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_50 == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar5 != (longlong *)0x0);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x498))();
    plVar4 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      if (unaff_RDI[0x10] != 0) {
        FUN_000bfee0();
        (**(code **)(*plVar5 + 0x498))();
        plVar4 = local_40;
        if ((local_60 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 == plVar7) goto LAB_00448455;
      }
      local_90 = 0;
      FUN_00d50b00();
      local_c8 = DAT_02705b60;
      local_90 = '\x01';
      local_98 = unaff_RDI;
      if (DAT_02705b60 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      (**(code **)(*plVar5 + 0x498))();
      local_80 = 0;
      if ((local_60 == '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = plVar7;
      if (DAT_02705c60 == '\0') {
        local_80 = '\x01';
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0279e9f8 = FUN_0044b870();
          DAT_0279e9e0 = "MUFader";
          _DAT_0279e9e8 = 0x70;
          _DAT_0279e9f0 = FUN_0044b810;
          _DAT_0279ea00 = 0;
          uRam000000000279ea08 = 0;
          _DAT_0279ea10 = 0;
          uRam000000000279ea18 = 0;
          _DAT_0279ea20 = 0;
          uRam000000000279ea28 = 0;
          _DAT_0279ea30 = 0;
          uRam000000000279ea38 = 0;
          _DAT_0279ea40 = 0;
          uRam000000000279ea48 = 0;
          _DAT_0279ea50 = 0;
          uRam000000000279ea58 = 0;
          _DAT_0279ea60 = 0;
          uRam000000000279ea68 = 0;
          _DAT_0279ea70 = 0;
          uRam000000000279ea78 = 0;
          _DAT_0279ea80 = 0;
          uRam000000000279ea88 = 0;
          _DAT_0279ea90 = 0;
          uRam000000000279ea98 = 0;
          _DAT_0279eaa0 = 0;
          ___cxa_guard_release();
        }
      }
      uVar6 = FUN_00e86210();
      local_b8 = DAT_02705b68;
      if (DAT_02705b68 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00c841b0(uVar6,&local_b8);
      local_70 = 0;
      local_78 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_70 = '\x01';
      local_a0 = '\0';
      local_a8 = 0;
      FUN_000bfbc0(&local_88,&local_c8,0xa0,&local_78);
      plVar7 = (longlong *)unaff_RDI[0x10];
      plVar4 = plVar7;
      if (plVar7 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
            goto LAB_00448342;
          }
          FUN_00d50b00();
          plVar7 = (longlong *)unaff_RDI[0x10];
          unaff_RDI[0x10] = (longlong)local_40;
          plVar4 = local_40;
        }
        else {
          local_38[0] = '\0';
          plVar4 = local_40;
LAB_00448342:
          unaff_RDI[0x10] = (longlong)plVar4;
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((local_38[0] != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00448455;
    }
  }
  if (unaff_RDI[0x10] != 0) {
    unaff_RDI[0x10] = 0;
    FUN_00d50b20();
  }
LAB_00448455:
  FUN_00447c70();
  FUN_0044a930();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


