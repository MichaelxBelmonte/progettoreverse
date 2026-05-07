// Function: FUN_009daaae
// Address: 009daaae
// Size: 635 bytes
// Class: GNString


ulonglong FUN_009daaae(void)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 **ppuVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong unaff_RDI;
  undefined7 uVar11;
  byte *pbVar9;
  ulonglong uVar10;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x88);
  pbVar1 = (byte *)(lVar4 + 1);
  *(byte **)(unaff_RDI + 0x88) = pbVar1;
  if (pbVar1 == *(byte **)(unaff_RDI + 0x80)) {
    lVar4 = *(longlong *)(unaff_RDI + 0x78);
    ppuVar6 = &local_88;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar6,(longlong)pbVar1 - lVar4);
    if (((ulonglong)local_88 & 1) != 0) {
      operator_delete(ppuVar6);
    }
    uVar10 = 0;
  }
  else {
    local_88 = &local_80;
    local_78 = 0;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = &local_40;
    local_40 = 0;
    local_38 = 0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 1;
    pbVar7 = (byte *)(lVar4 + 2);
    pbVar8 = pbVar1;
    pbVar9 = pbVar1;
    do {
      pvVar5 = (void *)(ulonglong)*pbVar8;
      lVar4 = **(longlong **)(unaff_RDI + 8);
      uVar11 = (undefined7)((ulonglong)pbVar9 >> 8);
      switch(*(undefined1 *)(lVar4 + 0x20 + (longlong)pvVar5)) {
      case 4:
        if (pbVar8 == pbVar1) {
          local_58 = CONCAT11(local_58._1_1_,1);
          *(byte **)(unaff_RDI + 0x88) = pbVar7;
          pbVar9 = pbVar7;
        }
        else {
          FUN_009df5d8();
        }
        break;
      default:
        FUN_009df5d8();
        break;
      case 9:
        cVar2 = FUN_009df708();
        if (cVar2 == '\0') {
          uVar10 = CONCAT71(uVar11,1);
          goto LAB_009dac47;
        }
        break;
      case 10:
        if (pbVar8 != pbVar9) {
          *(byte **)(unaff_RDI + 0x88) = pbVar8 + 1;
          if (local_58._1_1_ == '\0') {
            lVar4 = FUN_009de670(pvVar5,0);
          }
          else {
            lVar4 = FUN_009ddc0e(pvVar5,0);
          }
          uVar10 = CONCAT71(uVar11,1);
          if (lVar4 != 0) goto LAB_009dac47;
          FUN_009d86be();
          goto LAB_009dac44;
        }
        FUN_009df5d8();
        pbVar9 = pbVar8;
        break;
      case 0xc:
        *(byte **)(unaff_RDI + 0x88) = pbVar8 + 1;
        cVar2 = *(char *)(lVar4 + 0x20 + (ulonglong)pbVar8[1]);
        if (cVar2 == '\x17') {
          uVar3 = FUN_009d826e(pvVar5,pbVar8 + 2);
          if (uVar3 == 0) goto LAB_009dac1a;
          local_54 = CONCAT44(local_54._4_4_ | uVar3,(uint)local_54);
        }
        else {
          if ((cVar2 != '\x16') || (uVar3 = FUN_009d826e(pvVar5,pbVar8 + 2), uVar3 == 0)) {
LAB_009dac1a:
            *(longlong *)(unaff_RDI + 0x88) = *(longlong *)(unaff_RDI + 0x88) + -1;
            FUN_009df5d8();
            break;
          }
          local_54 = CONCAT44(local_54._4_4_,(uint)local_54 | uVar3);
        }
        local_4c = 0;
        *(longlong *)(unaff_RDI + 0x88) = *(longlong *)(unaff_RDI + 0x88) + 1;
      }
      pbVar8 = *(byte **)(unaff_RDI + 0x88);
    } while (pbVar8 != *(byte **)(unaff_RDI + 0x80));
LAB_009dac44:
    uVar10 = 0;
LAB_009dac47:
    FUN_009df1d6();
    if (local_70 != 0) {
      local_68 = local_70;
      operator_delete(pvVar5);
    }
    FUN_009df1d6();
  }
  return uVar10 & 0xffffffff;
}


