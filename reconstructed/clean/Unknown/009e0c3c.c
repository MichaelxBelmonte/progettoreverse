// Function: FUN_009e0c3c
// Address: 009e0c3c
// Size: 626 bytes
// Class: Unknown
// String references:
//   "  The error occurred while parsing the regular expression fragment: '"
//   "  The error occurred while parsing the regular expression: '"
//   ">>>HERE>>>"
//   "'."

void FUN_009e0c3c(uint64_t param_1,char *param_2,char *param_3)

{
  void*puVar1;
  int64_t lVar2;
  char *pcVar3;
  ulong uVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint64_t local_50;
  char *local_48;
  void*local_40;
  
  lVar2 = *this_ptr;
  if (*(int *)(lVar2 + 0x2c) == 0) {
    *(int *)(lVar2 + 0x2c) = unaff_ESI;
  }
  this_ptr[0x11] = this_ptr[0x10];
  pcVar7 = (char *)((int64_t)&MACH_HEADER.cpusubtype + 2);
  if (9 < (int64_t)param_2) {
    pcVar7 = param_2;
  }
  pcVar7 = (char *)((int64_t)pcVar7 + 0xfffffffffffffff6);
  if (param_3 != param_2) {
    pcVar7 = param_3;
  }
  pcVar3 = (char *)(this_ptr[0x10] - this_ptr[0xf]);
  pcVar8 = (char *)((int64_t)param_2 + 10U);
  if ((int64_t)pcVar3 <= (int64_t)param_2 + 10U) {
    pcVar8 = pcVar3;
  }
  if (unaff_ESI != 0x11) {
    std::string::append(pcVar3);
    if (pcVar7 != pcVar8) {
      lVar2 = this_ptr[0xf];
      pcVar6 = param_2 + (lVar2 - (int64_t)(pcVar7 + lVar2));
      if ((char *)0xffffffffffffffef < pcVar6) {
LAB_009e0ea5:
                            std::__basic_string_common<true>::__throw_length_error();
      }
      if (pcVar6 < "") {
        bVar5 = (char)pcVar6 * '\x02';
        puVar1 = (void*)((int64_t)&local_50 + 1);
        local_50 = CONCAT71(local_50._1_7_,bVar5);
      }
      else {
        puVar1 = operator_new((ulong)pcVar3);
        local_50 = (uint64_t)(pcVar6 + 0x10) & 0xfffffffffffffff0 | 1;
        bVar5 = (byte)(pcVar6 + 0x10) & 0xf0 | 1;
        local_48 = pcVar6;
        local_40 = puVar1;
      }
      if (pcVar7 != param_2) {
        pcVar3 = (char *)0x0;
        do {
          puVar1[(int64_t)pcVar3] = (pcVar7 + lVar2)[(int64_t)pcVar3];
          pcVar3 = (char *)((int64_t)pcVar3 + 1);
        } while ((char *)((int64_t)param_2 - (int64_t)pcVar7) != pcVar3);
        puVar1 = puVar1 + (int64_t)pcVar3;
      }
      *puVar1 = 0;
      if ((bVar5 & 1) == 0) {
        uVar4 = (ulong)(bVar5 >> 1);
      }
      else {
        uVar4 = (ulong)local_48;
      }
      std::string::append(pcVar3,uVar4);
      if ((local_50 & 1) != 0) {
        operator_delete(pcVar3);
      }
      std::string::append(pcVar3);
      lVar2 = this_ptr[0xf];
      pcVar7 = pcVar8 + (lVar2 - (int64_t)(param_2 + lVar2));
      if ((char *)0xffffffffffffffef < pcVar7) goto LAB_009e0ea5;
      if (pcVar7 < "") {
        bVar5 = (char)pcVar7 * '\x02';
        puVar1 = (void*)((int64_t)&local_50 + 1);
        local_50 = CONCAT71(local_50._1_7_,bVar5);
      }
      else {
        puVar1 = operator_new((ulong)pcVar3);
        local_50 = (uint64_t)(pcVar7 + 0x10) & 0xfffffffffffffff0 | 1;
        bVar5 = (byte)(pcVar7 + 0x10) & 0xf0 | 1;
        local_48 = pcVar7;
        local_40 = puVar1;
      }
      if (pcVar8 != param_2) {
        pcVar3 = (char *)0x0;
        do {
          puVar1[(int64_t)pcVar3] = (param_2 + lVar2)[(int64_t)pcVar3];
          pcVar3 = (char *)((int64_t)pcVar3 + 1);
        } while ((char *)((int64_t)pcVar8 - (int64_t)param_2) != pcVar3);
        puVar1 = puVar1 + (int64_t)pcVar3;
      }
      *puVar1 = 0;
      if ((bVar5 & 1) == 0) {
        uVar4 = (ulong)(bVar5 >> 1);
      }
      else {
        uVar4 = (ulong)local_48;
      }
      std::string::append(pcVar3,uVar4);
      if ((local_50 & 1) != 0) {
        operator_delete(pcVar3);
      }
    }
    std::string::append(pcVar3);
    lVar2 = *this_ptr;
  }
  if ((*(byte *)(lVar2 + 0x2a) & 4) == 0) {
    FUN_00acde90(param_2,unaff_ESI);
    FUN_00acdf00();
    FUN_00acded0();
  }
  return;
}

