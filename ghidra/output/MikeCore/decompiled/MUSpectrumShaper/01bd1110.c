// Function: FUN_01bd1110
// Address: 01bd1110
// Size: 1045 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01bd143e) */
/* WARNING: Removing unreachable block (ram,0x01bd144a) */
/* WARNING: Removing unreachable block (ram,0x01bd1222) */
/* WARNING: Removing unreachable block (ram,0x01bd122e) */
/* WARNING: Removing unreachable block (ram,0x01bd1305) */
/* WARNING: Removing unreachable block (ram,0x01bd1311) */
/* WARNING: Removing unreachable block (ram,0x01bd1519) */
/* WARNING: Removing unreachable block (ram,0x01bd1522) */
/* WARNING: Removing unreachable block (ram,0x01bd12b5) */
/* WARNING: Removing unreachable block (ram,0x01bd12c1) */
/* WARNING: Removing unreachable block (ram,0x01bd13f0) */
/* WARNING: Removing unreachable block (ram,0x01bd13fc) */

void FUN_01bd1110(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 in_XMM1_Dc;
  undefined4 uVar6;
  longlong local_c0;
  char local_b8;
  longlong *local_68;
  char local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  float local_34;
  
  local_34 = (float)(**(code **)(*unaff_RDI + 0xb10))();
  cVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = DAT_02390124 - local_34;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
  local_48 = FUN_01e3f820();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))((undefined4)local_48,uVar6,0,uVar3);
  if (unaff_RDI[0x3c] != 0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = *(longlong *)(unaff_RDI[0x3c] + 0x10);
    local_50 = 0;
    if (0 < *(int *)(local_58 + 0xc)) {
      do {
        local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + (longlong)local_50 * 8);
        FUN_01bd1720((longlong)local_50,&local_68);
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        uVar6 = (undefined4)unaff_RDI[0x2e];
        uVar4 = FUN_00c71d60();
        *(undefined4 *)(unaff_RDI + 0x2e) = uVar4;
        uVar4 = (**(code **)(*unaff_RDI + 0xb10))();
        local_48._0_4_ = uVar4;
        (**(code **)(*unaff_RDI + 0xaf0))();
        FUN_01e3f820();
        local_48 = (**(code **)(*plVar1 + 0x560))();
        uVar4 = FUN_01d526f0();
        uVar5 = FUN_00d05510((undefined4)local_48,param_2,uVar4);
        local_48 = uVar5;
        cVar2 = (**(code **)(*unaff_RDI + 0x9a0))();
        if (cVar2 == '\0') {
          in_XMM1_Dc = 0;
          param_2 = DAT_0239011c;
          FUN_01d49110((undefined4)local_48,3);
        }
        else {
          (**(code **)(*(longlong *)*unaff_RSI + 0x400))((undefined4)local_48);
        }
        *(undefined4 *)(unaff_RDI + 0x2e) = uVar6;
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        local_50 = local_50 + 1;
      } while (local_50 < *(int *)(local_58 + 0xc));
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar5 = FUN_01e3f820();
  local_48 = uVar5;
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  FUN_01cc0c20((undefined4)local_48,param_2,local_34,DAT_02390d00,param_2,in_XMM1_Dc);
  FUN_00d50b20();
  return;
}


