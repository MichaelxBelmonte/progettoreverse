# 05 — Sistema di Quality Scoring

Melodyne assegna a ogni nota/detection un punteggio di qualita' multi-dimensionale.

## Pitch Quality

| Metrica | Descrizione |
|---------|-------------|
| `_pitchCenterQuality` | Stabilita' del pitch nel tempo |
| `_pitchHarmonicQuality` | Corrispondenza con la serie armonica |
| `_pitchQualityWeight` | Peso nel ranking finale |
| `_pitchRelevanceSampleOffset` | Offset per la rilevanza pitch |
| `_pitchBarycenter` | Baricentro del pitch |
| `_pitchByHarmonics` | Pitch stimato dagli armonici |
| `_pitchConsistency` | Consistenza del pitch |
| `_pitchCommonFateDeviation` | Deviazione dal "common fate" (Gestalt) |
| `_pitchCurveDeflection` | Deflessione della curva di pitch |
| `_pitchCurveSlope` | Pendenza della curva |
| `_pitchHorizontality` | Quanto il pitch e' stabile (orizzontale) |
| `_pitchJumpsSum` | Somma dei salti di pitch |

## Harmonic Quality

| Metrica | Descrizione |
|---------|-------------|
| `_harmonicHitQuality` | Quanti armonici attesi sono presenti |
| `_harmonicRatioQuality` | Rapporto ampiezza tra armonici |
| `_correlationQuality` | Autocorrelazione |
| `_harmonicMagnitudes` | Magnitudini dei singoli armonici |
| `_harmonicPaths` | Percorsi armonici tracciati |
| `_harmonicSpectrum` | Spettro armonico completo |
| `_subharmonicChains` | Catene di sub-armonici rilevate |
| `_subharmonicPaths` | Percorsi di tracking sub-armonici |

## Spectral Quality

| Metrica | Descrizione |
|---------|-------------|
| `_spectralMagnitudeSum` | Somma delle magnitudini spettrali |
| `_spectralPointsAtSlices` | Punti spettrali per ogni time slice |
| `_spectralPointsHorizontalQualitiesAtSlices` | Qualita' orizzontale (continuita' temporale) |
| `_spectralPointsVerticalQualitiesAtBins` | Qualita' verticale (coerenza in frequenza) |

## Rhythm / Attack Quality

| Metrica | Descrizione |
|---------|-------------|
| `_attackQuality` | Qualita' riconoscimento attacco |
| `_allAttackPeakQuality` | Qualita' di tutti i picchi d'attacco |
| `_assignedAttackQuality` | Qualita' dell'attacco assegnato |
| `_attackAssignmentQuality` | Qualita' dell'assegnazione |
| `_allRhythmicQuality` | Qualita' ritmica complessiva |
| `_beatMatchingQuality` | Corrispondenza con il beat |
| `_beatMatchingWeightedQuality` | Corrispondenza pesata |
| `_sameAttackQuality` | Qualita' attacchi simili |

## Separation Quality

| Metrica | Descrizione |
|---------|-------------|
| `_separationQuality` | Qualita' separazione polifonica |
| `_combiningQuality` | Qualita' ri-combinazione parziali |
| `_envelopeRatioQuality` | Rapporto envelope atteso/trovato |
| `_energyClaimFactor` | Fattore di energy claim |

## Musical Quality

| Metrica | Descrizione |
|---------|-------------|
| `_vibratoQuality` | Riconoscimento vibrato |
| `_portamentoQuality` | Riconoscimento portamento/glide |
| `_beatingQuality` | Riconoscimento beating (note vicine) |
| `_chordQuality` | Riconoscimento accordi |
| `_suspensionsExtensionQuality` | Qualita' estensioni/sospensioni |

## Path Quality

| Metrica | Descrizione |
|---------|-------------|
| `_horizontalPathQuality` | Qualita' percorso orizzontale (tempo) |
| `_verticalPathQuality` | Qualita' percorso verticale (frequenza) |
| `_interpolationQuality` | Qualita' interpolazione |

## Detection Quality (aggregato)

| Metrica | Descrizione |
|---------|-------------|
| `_detectionQuality` | Score complessivo di detection |
| `_detectionQualityWeightning` | Pesatura del quality score |
| `_feedbackActivationQualityLimit` | Soglia per attivazione feedback |
| `_attackItemDetectionQualityLimit` | Soglia qualita' per item attacco |
| `_attackItemDetectionVisualQualityLimit` | Soglia per visualizzazione |
| `_attackItemDefaultDetectionQualityLimit` | Soglia default per attacco |
| `_itemDetectionQualityLimit` | Soglia generica per item |
| `_itemDetectionVisualQualityLimit` | Soglia visuale generica |
| `_reflectsDetectionQuality` | Flag: riflette la detection quality |
| `_performanceForDetectionQuality` | Performance per quality |

## Composite / Internal Quality

| Metrica | Descrizione |
|---------|-------------|
| `_quality` | Score quality generico |
| `_ampQualityFactor` | Fattore di quality basato su ampiezza |
| `_assignmentQuality` | Qualita' dell'assegnazione (generico) |
| `_combinedQuality` | Quality combinato multi-fattore |
| `_filterQuality` | Qualita' del filtering |
| `_matchQuality` | Qualita' del matching |
| `_originalQuality` | Quality della detection originale (pre-edit) |
| `_satisfactionQuality` | Quality di "soddisfazione" (soglia raggiunta?) |
| `_tempQuality1` | Quality temporaneo 1 (workspace di calcolo) |
| `_tempQuality2` | Quality temporaneo 2 (workspace di calcolo) |
| `_testedQuality` | Quality dopo test/verifica |
| `_isBestQuality` | Flag: miglior quality tra i candidati |
| `_peakCountQuality` | Quality basato sul conteggio picchi |
| `_qualityForModeEvaluation` | Quality per valutazione modale (polifonico/monofonico) |
| `_qualityInFifthChain` | Quality nella catena delle quinte |
| `_preferredTempoWeightedQuality` | Quality pesato per tempo preferito |
