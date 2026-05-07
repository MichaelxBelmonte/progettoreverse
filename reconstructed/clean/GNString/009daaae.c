// Function: FUN_009daaae
// Address: 009daaae
// Size: 635 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009daaae(void)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  void *pvVar5;
  void**ppuVar6;
  byte *pbVar7;
  byte *pbVar8;
  int64_t this_ptr;
  undefined7 uVar11;
  byte *pbVar9;
  uint64_t uVar10;
  void*local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  int64_t local_68;
  uint64_t local_60;
  uint16_t local_58;
  uint64_t local_54;
  uint8_t local_4c;
  void*local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 0x88);
  pbVar1 = (byte *)(lVar4 + 1);
  *(byte **)(this_ptr + 0x88) = pbVar1;
  if (pbVar1 == *(byte **)(this_ptr + 0x80)) {
    lVar4 = *(int64_t *)(this_ptr + 0x78);
    ppuVar6 = &local_88;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar6,(int64_t)pbVar1 - lVar4);
    if (((uint64_t)local_88 & 1) != 0) {
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
      pvVar5 = (void *)(uint64_t)*pbVar8;
      lVar4 = **(int64_t **)(this_ptr + 8);
      uVar11 = (undefined7)((uint64_t)pbVar9 >> 8);
      switch(*(void*)(lVar4 + 0x20 + (int64_t)pvVar5)) {
      case 4:
        if (pbVar8 == pbVar1) {
          local_58 = CONCAT11(local_58._1_1_,1);
          *(byte **)(this_ptr + 0x88) = pbVar7;
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
          *(byte **)(this_ptr + 0x88) = pbVar8 + 1;
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
        *(byte **)(this_ptr + 0x88) = pbVar8 + 1;
        cVar2 = *(char *)(lVar4 + 0x20 + (uint64_t)pbVar8[1]);
        if (cVar2 == '\x17') {
          uVar3 = FUN_009d826e(pvVar5,pbVar8 + 2);
          if (uVar3 == 0) goto LAB_009dac1a;
          local_54 = CONCAT44(local_54._4_4_ | uVar3,(uint)local_54);
        }
        else {
          if ((cVar2 != '\x16') || (uVar3 = FUN_009d826e(pvVar5,pbVar8 + 2), uVar3 == 0)) {
LAB_009dac1a:
            *(int64_t *)(this_ptr + 0x88) = *(int64_t *)(this_ptr + 0x88) + -1;
            FUN_009df5d8();
            break;
          }
          local_54 = CONCAT44(local_54._4_4_,(uint)local_54 | uVar3);
        }
        local_4c = 0;
        *(int64_t *)(this_ptr + 0x88) = *(int64_t *)(this_ptr + 0x88) + 1;
      }
      pbVar8 = *(byte **)(this_ptr + 0x88);
    } while (pbVar8 != *(byte **)(this_ptr + 0x80));
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

