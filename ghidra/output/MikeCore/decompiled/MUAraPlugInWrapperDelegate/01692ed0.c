// Function: FUN_01692ed0
// Address: 01692ed0
// Size: 1245 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"


/* WARNING: Removing unreachable block (ram,0x016931c9) */
/* WARNING: Removing unreachable block (ram,0x016931d9) */
/* WARNING: Removing unreachable block (ram,0x01693336) */
/* WARNING: Removing unreachable block (ram,0x01693343) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01692ed0(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if (unaff_RDI[0x13] != 0) {
    if (unaff_RDI[6] != 0) {
      (**(code **)(*unaff_RDI + 0x5f0))();
    }
    cVar2 = FUN_016ae5f0();
    if (cVar2 != '\0') {
      while( true ) {
        lVar4 = unaff_RDI[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        iVar5 = *(int *)(lVar4 + 0xc);
        FUN_00d50b20();
        if (iVar5 == 0) break;
        FUN_00d50b00();
        lVar4 = unaff_RDI[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_0168eed0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (*(int *)(unaff_RDI[0x17] + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_016908b0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      } while (*(int *)(unaff_RDI[0x17] + 0xc) != 0);
    }
    if (unaff_RDI[0x15] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = unaff_RDI[0x15];
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (longlong *)unaff_RDI[5];
        if ((DAT_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_02723548 = "MUAraPlugInWrapperDelegate";
          DAT_02723558 = 0;
          _DAT_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x30))();
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    if (unaff_RDI[0x16] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar5 = 0;
      local_50 = unaff_RDI[0x16];
      while( true ) {
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            iVar5 = -iVar5;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar5);
            FUN_00d23690();
            local_40 = local_40 + iVar5;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (longlong *)unaff_RDI[5];
        if ((DAT_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_02723548 = "MUAraPlugInWrapperDelegate";
          DAT_02723558 = 0;
          _DAT_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x40))();
        iVar5 = local_48._4_4_;
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    FUN_00d50b00();
    FUN_016897c0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00e83070();
  }
  FUN_00bd1510();
  return;
}


