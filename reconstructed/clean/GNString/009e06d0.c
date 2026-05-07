// Function: FUN_009e06d0
// Address: 009e06d0
// Size: 1219 bytes
// Class: GNString
// String references:
//   "punctN5boost6detail17sp_counted_impl_pINS_29regex_iterator_implementationINSt3__111__wrap_iterIPKcE...
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009e06d0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int64_t lVar5;
  uint *puVar6;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar7;
  
  pbVar4 = *(byte **)(this_ptr + 0x88);
  pbVar1 = pbVar4 + 1;
  *(byte **)(this_ptr + 0x88) = pbVar1;
  if (pbVar1 == *(byte **)(this_ptr + 0x80)) {
    lVar5 = **(int64_t **)(this_ptr + 8);
    do {
      *(byte **)(this_ptr + 0x88) = pbVar4;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + -1;
    } while (*(char *)(lVar5 + 0x20 + (uint64_t)bVar2) != '\f');
    FUN_009d86be(lVar5,pbVar4 + (1 - *(int64_t *)(this_ptr + 0x78)));
    uVar7 = 0;
    goto LAB_009e0b74;
  }
  puVar6 = (uint *)0x0;
  iVar3 = (int)(char)*pbVar1;
  if (0x3b < iVar3) {
    if (iVar3 < 0x5f) {
      if (iVar3 == 0x3c) {
        FUN_009e00b6();
      }
      else {
        if (iVar3 != 0x3e) goto switchD_009e0766_caseD_21;
        FUN_009e00b6();
        FUN_009e00b6();
      }
    }
    else if (iVar3 == 0x5f) {
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
      FUN_009e00b6();
    }
    else if (iVar3 != 0x77) {
      if (iVar3 != 0x73) goto switchD_009e0766_caseD_21;
      goto switchD_009e0766_caseD_20;
    }
    goto LAB_009e0b08;
  }
  puVar6 = &switchD_009e0766::switchdataD_009e0c00;
  switch(iVar3) {
  case 0x20:
switchD_009e0766_caseD_20:
    break;
  default:
switchD_009e0766_caseD_21:
    FUN_009d86be(puVar6,(int64_t)pbVar1 - *(int64_t *)(this_ptr + 0x78));
    goto LAB_009e0b42;
  case 0x22:
    FUN_009e00b6();
    FUN_009e00b6();
    FUN_009e00b6();
    break;
  case 0x27:
    FUN_009e00b6();
    FUN_009e00b6();
    FUN_009e00b6();
    break;
  case 0x28:
    FUN_009e00b6();
    FUN_009e00b6();
    FUN_009e00b6();
    break;
  case 0x29:
    FUN_009e00b6();
    FUN_009e00b6();
    FUN_009e00b6();
    break;
  case 0x2e:
    FUN_009d826e(&switchD_009e0766::switchdataD_009e0c00,
                 "N5boost6detail17sp_counted_impl_pINS_29regex_iterator_implementationINSt3__111__wrap_iterIPKcEEcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE"
                );
  }
LAB_009e0b08:
  lVar5 = FUN_009de670();
  if (lVar5 == 0) {
    FUN_009d86be();
LAB_009e0b42:
    uVar7 = 0;
  }
  else {
    *(int64_t *)(this_ptr + 0x88) = *(int64_t *)(this_ptr + 0x88) + 1;
    uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  }
  FUN_009df1d6();
  FUN_009df1d6();
LAB_009e0b74:
  return uVar7 & 0xffffffff;
}

