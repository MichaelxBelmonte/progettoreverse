// Function: FUN_008d3766
// Address: 008d3766
// Size: 525 bytes
// Class: Unknown


void FUN_008d3766(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *local_48;
  
  puVar2 = (undefined8 *)unaff_RDI[1];
  if ((ulonglong)((unaff_RDI[2] - (longlong)puVar2 >> 7) * -0x5555555555555555) < unaff_RSI) {
    lVar1 = ((longlong)puVar2 - *unaff_RDI >> 7) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaa < lVar1 + unaff_RSI) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008d3a1a(unaff_RDI + 2,lVar1);
    puVar2 = local_48 + unaff_RSI * 0x30;
    do {
      *local_48 = &DAT_0251c2d0;
      ___bzero();
      local_48[0x27] = 0;
      local_48[0x26] = 0;
      local_48[0x25] = 0;
      local_48[0x24] = 0;
      local_48[0x23] = 0;
      *(undefined4 *)(local_48 + 0x28) = 0;
      local_48[0x29] = 0;
      local_48[0x2a] = 0;
      local_48[0x2b] = 0;
      local_48[0x2c] = 0;
      local_48[0x2d] = 0;
      local_48[0x2e] = 0;
      *(undefined2 *)(local_48 + 0x2f) = 0;
      local_48 = local_48 + 0x30;
    } while (puVar2 != local_48);
    FUN_008d398a();
    FUN_008d3a90();
  }
  else {
    puVar3 = puVar2;
    if (unaff_RSI != 0) {
      puVar3 = puVar2 + unaff_RSI * 0x30;
      do {
        *puVar2 = &DAT_0251c2d0;
        ___bzero();
        puVar2[0x27] = 0;
        puVar2[0x26] = 0;
        puVar2[0x25] = 0;
        puVar2[0x24] = 0;
        puVar2[0x23] = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2c] = 0;
        puVar2[0x2d] = 0;
        puVar2[0x2e] = 0;
        *(undefined2 *)(puVar2 + 0x2f) = 0;
        puVar2 = puVar2 + 0x30;
      } while (puVar3 != puVar2);
    }
    unaff_RDI[1] = (longlong)puVar3;
  }
  return;
}


